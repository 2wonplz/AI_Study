import requests
from bs4 import BeautifulSoup
from openpyxl import *

data = requests.get("https://www.weather.go.kr/w/weather/forecast/short-term.do?stnId=143")
soup = BeautifulSoup(data.text, 'html.parser')

days = soup.select(
    'body > div.container > section > div > div:nth-child(4) > div:nth-child(2) > section > div.cmp-stack > div > table > thead > tr > th')

wb = Workbook()
ws = wb.active

for day in days:
    d = day.select_one('th')