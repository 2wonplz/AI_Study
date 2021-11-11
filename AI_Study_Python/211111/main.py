import sys
from PyQt5.QtWidgets import *
from myExcel import MExcel


class MyApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initui()
        self.m = MExcel()

    def initui(self):
        label_1 = QLabel("입력1", self)
        label_1.move(20, 45)
        label_2 = QLabel("입력2", self)
        label_2.move(20, 85)
        label_3 = QLabel("입력3", self)
        label_3.move(20, 125)

        lineEdit1 = QLineEdit("aaa", self)
        lineEdit1.setFixedSize(60, 20)
        lineEdit1.move(70, 42)
        lineEdit2 = QLineEdit("bbb", self)
        lineEdit2.setFixedSize(60, 20)
        lineEdit2.move(70, 82)
        lineEdit3 = QLineEdit("ccc", self)
        lineEdit3.setFixedSize(60, 20)
        lineEdit3.move(70, 122)

        btnsave = QPushButton("저장하기", self)
        btnsave.move(150, 40)
        btnload = QPushButton("불러오기", self)
        btnload.move(150, 80)
        btncreate = QPushButton("Excel 생성", self)
        btncreate.move(150, 120)

        btnsave.clicked.connect(self.btnsavefunc)
        btnload.clicked.connect(self.btnloadfunc)
        btncreate.clicked.connect(self.btncreatefunc)

        self.setWindowTitle("First App")
        self.move(300, 300)
        self.resize(240, 200)
        self.show()

    def btnsavefunc(self):
        a = self.lineEdit1.text()
        b = self.lineEdit2.text()
        c = self.lineEdit3.text()
        self.m.save(a, b, c)

    def btnloadfunc(self):
        self.m.load()

    def btncreatefunc(self):
        self.m.create()


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec_())
