import requests
import json

url = "https://kauth.kakao.com/oauth/token"
data = {
    "grant_type": "refresh_token",
    "client_id": "63842d589e5e479d451dabfa3f295c59",
    "refresh_token": "Xe3Bq35kJ3TM4YX4Qs6DUF0zsw8zfVL7yOUImgo9c-wAAAF9jkB97A"
}
response = requests.post(url, data=data)
tokens = response.json()
# print(response.json())

with open("kakao_code.json", "w") as fp:
    json.dump(tokens, fp)
