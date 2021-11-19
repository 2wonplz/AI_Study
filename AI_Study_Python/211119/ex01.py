import pyautogui

# 현재 마우스 좌표 기준으로 100, 100만큼 마우스 이동
pyautogui.move(100, 100, duration=1)

# 절대 좌표 기준으로 100, 100만큼 마우스 이동
pyautogui.moveTo(100, 100, duration=1)

# 현재 마우스 좌표 가져오기
pos = pyautogui.position()
print(pos)

pyautogui.click(26, 1058, duration=1)
