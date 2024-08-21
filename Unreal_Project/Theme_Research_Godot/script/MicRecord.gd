extends Control

var effect  # See AudioEffect in docs
var recording  # See AudioStreamSample in docs
var token

var stereo := true
var mix_rate := 44100  # This is the default mix rate on recordings
var format := 1  # This equals to the default format: 16 bits


func _ready():
	var idx = AudioServer.get_bus_index("Record")
	effect = AudioServer.get_bus_effect(idx, 0)
'''
	var path = "user://userdata.txt"
	var file = FileAccess.open(path, FileAccess.READ)
	var json = JSON.parse_string(file.get_as_text().hex_decode().get_string_from_utf8())
	token = json["access_token"]
	print(token)
'''


func _on_RecordButton_pressed():
	if effect.is_recording_active():
		recording = effect.get_recording()
		$PlayButton.disabled = false
		$SaveButton.disabled = false
		effect.set_recording_active(false)
		recording.set_mix_rate(mix_rate)
		recording.set_format(format)
		recording.set_stereo(stereo)
		$RecordButton.text = "Record"
		var save_path = $SaveButton/Filename.text
		recording.save_to_wav(save_path)
		$Status.text = "Status: Saved WAV file to: %s\n(%s)" % [save_path, ProjectSettings.globalize_path(save_path)]
	else:
		$PlayButton.disabled = true
		$SaveButton.disabled = true
		effect.set_recording_active(true)
		$RecordButton.text = "Stop"
		$Status.text = "Status: Recording..."


func _on_PlayButton_pressed():
	print_rich("\n[b]Playing recording:[/b] %s" % recording)
	print_rich("[b]Format:[/b] %s" % ("8-bit uncompressed" if recording.format == 0 else "16-bit uncompressed" if recording.format == 1 else "IMA ADPCM compressed"))
	print_rich("[b]Mix rate:[/b] %s Hz" % recording.mix_rate)
	print_rich("[b]Stereo:[/b] %s" % ("Yes" if recording.stereo else "No"))
	var data = recording.get_data()
	print_rich("[b]Size:[/b] %s bytes" % data.size())
	$AudioStreamPlayer.stream = recording
	$AudioStreamPlayer.play()


func _on_Play_Music_pressed():
	if $AudioStreamPlayer2.playing:
		$AudioStreamPlayer2.stop()
		$PlayMusic.text = "Play Music"
	else:
		$AudioStreamPlayer2.play()
		$PlayMusic.text = "Stop Music"


func _on_SendButton_pressed():
	var http_request = $HTTPRequest
	var save_path = $SaveButton/Filename.text
	if FileAccess.file_exists(save_path):
		var file = FileAccess.open(save_path, FileAccess.READ)
		var content = file.get_buffer(file.get_length())
		file.close()
		var token_input = $SaveButton/Token.text
		var url = "https://88sh28xk3a.execute-api.ap-northeast-1.amazonaws.com/WhisperReq_Py"
		var headers = [
			"Authorization: Bearer " + token_input,
			"Content-Type: application/octet-stream",
			"Content-Length: " + str(content.size())
		]
		http_request.request_raw(url, headers, HTTPClient.METHOD_POST, content)
	else:
		$PlayButton.disabled = true
		$SaveButton.disabled = true
		$Status.text = "Error: File not found"


func _on_MixRateOptionButton_item_selected(index: int) -> void:
	if index == 0:
		mix_rate = 11025
	elif index == 1:
		mix_rate = 16000
	elif index == 2:
		mix_rate = 22050
	elif index == 3:
		mix_rate = 32000
	elif index == 4:
		mix_rate = 44100
	elif index == 5:
		mix_rate = 48000
	if recording != null:
		recording.set_mix_rate(mix_rate)


func _on_FormatOptionButton_item_selected(index: int) -> void:
	if index == 0:
		format = AudioStreamWAV.FORMAT_8_BITS
	elif index == 1:
		format = AudioStreamWAV.FORMAT_16_BITS
	elif index == 2:
		format = AudioStreamWAV.FORMAT_IMA_ADPCM
	if recording != null:
		recording.set_format(format)


func _on_StereoCheckButton_toggled(button_pressed: bool) -> void:
	stereo = button_pressed
	if recording != null:
		recording.set_stereo(stereo)


func _on_open_user_folder_button_pressed():
	OS.shell_open(ProjectSettings.globalize_path("user://"))


func _on_http_request_request_completed(result:int, response_code:int, headers:PackedStringArray, body:PackedByteArray):
	if response_code == 200:
		$Status.text = JSON.parse_string(body.get_string_from_utf8())["text"]
	else:
		$Status.text = "Failure: Uproad failed with response code: " + str(response_code)
