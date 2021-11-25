import sys
import time
import pyautogui
import pyperclip
from PyQt5.QtWidgets import *


class MyApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initui()

    def doms(self):
        try:
            pyautogui.hotkey('win', 'r')
            pyautogui.write('mspaint')
            pyautogui.press('enter')

            pyautogui.sleep(1)
            fw = pyautogui.getWindowsWithTitle('제목 없음')[0]
            if fw.isActive == False:
                fw.activate()
            if fw.isMaximized == False:
                fw.maximize()

            pyautogui.sleep(1)
            box = pyautogui.locateOnScreen('font.PNG', confidence=0.8)
            pyautogui.click(box)
            pyautogui.click()
            pyautogui.move(10, 200, duration=1)
            pyautogui.click()
            pyperclip.copy('참 잘했어요')
            pyautogui.hotkey('ctrl', 'v')

            pyautogui.sleep(3.5)
            pyautogui.hotkey('alt', 'f4')
            pyautogui.hotkey('n')

        except Exception as e:
            print(e)

    def initui(self):
        self.mpaintbtn = QPushButton("그림판", self)
        self.mpaintbtn.move(30, 20)
        self.mpaintbtn.clicked.connect(self.doms)

        self.setWindowTitle("First App")
        self.move(300, 300)
        self.resize(400, 200)
        self.show()


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec_())
