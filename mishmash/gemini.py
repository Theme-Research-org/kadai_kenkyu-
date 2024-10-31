import os
from PIL import Image
import google.generativeai as genai
import io
import requests

# API-KEYの設定
GOOGLE_API_KEY=os.getenv('GOOGLE_API_KEY')
genai.configure(api_key=GOOGLE_API_KEY)

prompt = 'これは何ですか？'
img_url = 'https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEh2z0g4PFRJSWkcijegUmLKuJeEaHiSlPQKXiOIeMVBZliBK25E0mFej7pQVVV0Lc6cSy5RGUpq0uqueBokGV62WCahdOgeKkdfJvysH9jr3axXqm8bsvdmvbrAJD2WtcLfsFx9n5HthZfVAMyxscGPTtC4HnN0dsxcmLgPfIhoVZbGmUwWLQB4kA/s16000/gemini%20top.webp'
img = Image.open(io.BytesIO(requests.get(img_url).content))

gemini_pro = genai.GenerativeModel("gemini-pro-vision")
response = gemini_pro.generate_content([prompt, img])

try:
    print(response.text)
except:
    print('Blocked')