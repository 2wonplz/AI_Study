import sys
from PyQt5.QtWidgets import *
import exexcel


class MyApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initui()

    def makefile(self):
        exexcel.makebasic()
        QMessageBox.information(self, '알림', '파일이 생성되었습니다.')

    def tenfn(self):
        exexcel.maketen()
        QMessageBox.information(self, '알림', '10점으로 변경되었습니다.')

    def totalfn(self):
        exexcel.maketotal()
        QMessageBox.information(self, '알림', '총점 계산 완료.')

    def gradefn(self):
        exexcel.makegrade()
        QMessageBox.information(self, '알림', '성적 계산 완료.')

    def initui(self):
        self.filebtn = QPushButton("파일 만들기")
        self.tenbtn = QPushButton("퀴즈2 10점 만들기")
        self.totalbtn = QPushButton("총점 표시")
        self.gradebtn = QPushButton("성적 표시")

        self.hbox1 = QHBoxLayout()
        self.hbox1.addStretch(1)
        self.hbox1.addWidget(self.filebtn)
        self.hbox1.addWidget(self.tenbtn)
        self.hbox1.addStretch(1)

        self.hbox2 = QHBoxLayout()
        self.hbox2.addStretch(1)
        self.hbox2.addWidget(self.totalbtn)
        self.hbox2.addWidget(self.gradebtn)
        self.hbox2.addStretch(1)

        # 세로로 된 레이아웃 만들기
        self.vbox = QVBoxLayout()
        # 세로로 된 레이아웃에 버튼 넣기
        self.vbox.addStretch(5)
        self.vbox.addLayout(self.hbox1)
        self.vbox.addLayout(self.hbox2)
        self.vbox.addStretch(1)

        self.setLayout(self.vbox)
        self.setWindowTitle("First App")
        self.move(300, 300)
        self.resize(200, 200)
        self.show()

        # 버튼에 이벤트 달기
        self.filebtn.clicked.connect(self.makefile)
        self.tenbtn.clicked.connect(self.tenfn)
        self.totalbtn.clicked.connect(self.totalfn)
        self.gradebtn.clicked.connect(self.gradefn)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec_())
