import pyautogui

pyautogui.move(100, 100, duration=1)
pyautogui.moveTo(100, 100, duration=1)

print('현재좌표 :', pyautogui.position())

pyautogui.click(46, 16, duration=1)
print('현재좌표 :', pyautogui.position())
