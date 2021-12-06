# import requests
#
# url = 'https://kauth.kakao.com/oauth/token'
# rest_api_key = '63842d589e5e479d451dabfa3f295c59'
# redirect_uri = 'https://example.com/oauth'
# authorize_code = 'ql7p5DTLSDsRrC0dMh6q4Cld9OpZkdlvLy2BtAtnXa8zyeR3GJCY0jRP3yyCzfUfP_A6QQopyV8AAAF9jj9jyw'
#
# data = {
#     'grant_type': 'authorization_code',
#     'client_id': rest_api_key,
#     'redirect_uri': redirect_uri,
#     'code': authorize_code,
# }
#
# response = requests.post(url, data=data)
# tokens = response.json()
# print(tokens)
#
# # json 저장
import json
#
# with open("kakao_code.json", "w") as fp:
#     json.dump(tokens, fp)


#2.
with open("kakao_code.json","r") as fp:
    ts = json.load(fp)
print(ts)
print(ts["access_token"])