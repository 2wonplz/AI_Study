import sys
from PyQt5.QtWidgets import *
from myGrade import Grade


class MyApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initui()
        self.m = Grade()

    def initui(self):
        label_1 = QLabel("국어", self)
        label_1.move(20, 45)
        label_2 = QLabel("영어", self)
        label_2.move(20, 85)
        label_3 = QLabel("수학", self)
        label_3.move(20, 125)

        self.lineEdit1 = QLineEdit("점수입력", self)
        self.lineEdit1.setFixedSize(60, 20)
        self.lineEdit1.move(70, 42)
        self.lineEdit2 = QLineEdit("점수입력", self)
        self.lineEdit2.setFixedSize(60, 20)
        self.lineEdit2.move(70, 82)
        self.lineEdit3 = QLineEdit("점수입력", self)
        self.lineEdit3.setFixedSize(60, 20)
        self.lineEdit3.move(70, 122)

        btnsave = QPushButton("저장하기", self)
        btnsave.move(150, 40)
        btnload = QPushButton("불러오기", self)
        btnload.move(150, 80)
        btncreate = QPushButton("Excel 생성", self)
        btncreate.move(150, 120)

        btnsave.clicked.connect(self.btnsavefunc)
        btnload.clicked.connect(self.btnloadfunc)
        btncreate.clicked.connect(self.btncreatefunc)

        self.setWindowTitle("성적 관리")
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
