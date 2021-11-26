import time
import pyautogui
from selenium import webdriver

browser = webdriver.Chrome()

browser.get('http://www.naver.com')

element = browser.find_element_by_link_text('카페')

print(element.get_attribute('href'))
print(element.get_attribute('class'))

element.click()
time.sleep(1)
browser.back()
time.sleep(1)
browser.refresh()

inputele = browser.find_element_by_id('query')
inputele.send_keys('삼성전자우')
pyautogui.hotkey('enter')

browser.save_screenshot('samsung.png')

time.sleep(5)
browser.close()
