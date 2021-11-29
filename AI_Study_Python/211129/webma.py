from selenium import webdriver
import time

# chrom = webdriver('')

def dostart(id, pw):
    browser = webdriver.Chrome()

    browser.get('https://kb.step.or.kr/main.do')

    time.sleep(5)

    browser.close()
    browser.quit()