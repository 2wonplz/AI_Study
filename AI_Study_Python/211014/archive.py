# archive.py 실행하면 크롬브라우저가 실행되면서
# 주소를 임의적으로 입력해서 자동으로 매크로수행을 하는 프로그램

# ctrl + alt + l : 줄 정렬

from selenium import webdriver

aa = webdriver.Chrome('./chromedriver.exe')

aa.get('http://www.naver.com')

aa.find_element_by_xpath('/html/body/div[2]/div[2]/div[2]/div[1]/div[1]/ul[1]/li[2]/a').click()

'''
import webbrowser
import json
from urllib.request import urlopen

print("Let's find an old website.")
site = input("Type a website URL : ")
era = input("type a year, month, and day, like 20211014 : ")
url = "http://archive.org/wayback/available?url=%s&timestam%s" % (site, era)
response = urlopen(url)
contents = response.read()
text = contents.decode("utf-8")
data = json.loads(text)
try :
    old_site = data["archived_snapshots"]["closest"]["url"]
    print("Found this copy : ", old_site)
    print("It should appear in your browser now.")
    webbrowser.open(old_site)
except :
    print("Sorry, no luck finding", site)
'''