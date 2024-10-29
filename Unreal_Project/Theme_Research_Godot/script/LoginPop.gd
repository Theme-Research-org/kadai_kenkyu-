extends Control


var http_request := HTTPRequest.new()

# Called when the node enters the scene tree for the first time.
func _ready():
	add_child(http_request)
	http_request.request_completed.connect(self._http_request_completed)


# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta):
	pass


func _button_control(bDisabled):
	$ColorRect/LoginButton.disabled = bDisabled
	$ColorRect/SignUpButton.disabled = bDisabled
	$ColorRect/QuitButton.disabled = bDisabled


func _on_quit_button_pressed():
	self.hide()


func _on_login_button_pressed():
	_button_control(true)
	if $ColorRect/Mail/LineEdit.text == "" or $ColorRect/Pass/LineEdit.text == "":
		$ColorRect/Label.text = "入力されていない箇所があります。"
		_button_control(false)
	else:
		$ColorRect/Label.text = ""
		var url = "https://theme-research-test.jp.auth0.com"
		var client_id = "lyJcEIIv9J6ft6lyn1gcvwDLABPhXMub"
		var headers = [
			"content-type: application/json",
		]
		var username = $ColorRect/Mail/LineEdit.text
		var password = $ColorRect/Pass/LineEdit.text
		var body = JSON.stringify({
			"grant_type": "password",
			"client_id": client_id,
			"username": username,
			"password": password
		})
		print(username, password)
		var error = http_request.request(url + "/oauth/token", headers, HTTPClient.METHOD_POST, body)
		if error != OK:
			push_error("An error occurred in the HTTP request.")

func _http_request_completed(result, response_code, headers, body):
	var path = "user://userdata.txt"
	var file = FileAccess.open(path, FileAccess.WRITE)
	print()
	file.store_string(body.hex_encode())
	file.close()
	print(body.get_string_from_utf8())
	GameManager.load_game_scene()

