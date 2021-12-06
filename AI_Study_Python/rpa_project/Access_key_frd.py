import requests

url = 'https://kauth.kakao.com/oauth/token'
rest_api_key = '63842d589e5e479d451dabfa3f295c59'
redirect_uri = 'https://example.com/oauth'
authorize_code = 'BEWpDL2PWZGD9hFfBbAMX83u5zb2VeJp2BRPaBXPdOFG-sBO15RZHeZjdEyBI1frmnN8PQorDNQAAAF9jm65-g'

data = {
    'grant_type': 'authorization_code',
    'client_id': rest_api_key,
    'redirect_uri': redirect_uri,
    'code': authorize_code,
}

response = requests.post(url, data=data)
tokens = response.json()
print(tokens)

# json 저장
import json

with open("kakao_code_frd.json", "w") as fp:
    json.dump(tokens, fp)
