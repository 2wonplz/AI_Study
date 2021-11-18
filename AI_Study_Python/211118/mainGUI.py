import sys
from PyQt5.QtWidgets import *
from scoreExcel import scoreExcel
import os.path


class MyApp(QWidget):
    def __init__(self):
        super().__init__()

        self.se = scoreExcel()
        self.rowIndex = 0

        self.initui()  # 화면생성
        self.initEvent()  # 시그널생성 이벤트함수

        file = 'D:\\python_work\\211118\\score.xlsx'  # 파일이 없을때 오류떠서 넣음
        if os.path.isfile(file) == True:
            self.loadfile()

    def loadfile(self):
        rows = self.se.loadrow()
        for row in rows:
            self.qtable.setItem(self.rowIndex, 0, QTableWidgetItem(row[0]))
            self.qtable.setItem(self.rowIndex, 1, QTableWidgetItem(row[1]))
            self.qtable.setItem(self.rowIndex, 2, QTableWidgetItem(row[2]))
            self.qtable.setItem(self.rowIndex, 3, QTableWidgetItem(row[3]))
            self.qtable.setItem(self.rowIndex, 4, QTableWidgetItem(row[4]))
            self.rowIndex += 1

    def append(self):
        try:
            kor = self.kor_edit.text()
            eng = self.eng_edit.text()
            math = self.math_edit.text()
            tot = int(kor) + int(eng) + int(math)
            avg = int(tot / 3 * 100) / 100

            self.qtable.setItem(self.rowIndex, 0, QTableWidgetItem(kor))
            self.qtable.setItem(self.rowIndex, 1, QTableWidgetItem(eng))
            self.qtable.setItem(self.rowIndex, 2, QTableWidgetItem(math))
            self.qtable.setItem(self.rowIndex, 3, QTableWidgetItem(str(tot)))
            self.qtable.setItem(self.rowIndex, 4, QTableWidgetItem(str(avg)))
            self.se.appendrow(kor, eng, math, str(tot), str(avg))
            self.rowIndex += 1
        except Exception as e:
            print(e)

    def delete(self):
        self.qtable.setItem(self.rowIndex - 1, 0, QTableWidgetItem(''))
        self.qtable.setItem(self.rowIndex - 1, 1, QTableWidgetItem(''))
        self.qtable.setItem(self.rowIndex - 1, 2, QTableWidgetItem(''))
        self.qtable.setItem(self.rowIndex - 1, 3, QTableWidgetItem(''))
        self.qtable.setItem(self.rowIndex - 1, 4, QTableWidgetItem(''))

        self.se.deleterow(self.rowIndex)
        self.rowIndex -= 1

    def create(self):
        self.se.createfile()

    def initEvent(self):
        self.add_btn.clicked.connect(self.append)
        self.del_btn.clicked.connect(self.delete)
        self.create_btn.clicked.connect(self.create)

    def initui(self):
        self.qtable = QTableWidget(self)
        self.qtable.setRowCount(10)
        self.qtable.setColumnCount(5)
        self.qtable.move(50, 130)
        self.qtable.setFixedSize(500, 250)
        self.qtable.setHorizontalHeaderLabels(['국어', '영어', '수학', '총점', '평균'])
        self.qtable.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)

        kor_label = QLabel("국어", self)
        kor_label.move(50, 40)
        eng_label = QLabel("영어", self)
        eng_label.move(50, 70)
        math_label = QLabel("수학", self)
        math_label.move(50, 100)

        self.kor_edit = QLineEdit("100", self)
        self.kor_edit.move(100, 36)
        self.eng_edit = QLineEdit("80", self)
        self.eng_edit.move(100, 66)
        self.math_edit = QLineEdit("50", self)
        self.math_edit.move(100, 96)

        self.add_btn = QPushButton("추가", self)
        self.add_btn.move(500, 30)
        self.del_btn = QPushButton("삭제", self)
        self.del_btn.move(500, 60)
        self.create_btn = QPushButton("파일 생성", self)
        self.create_btn.move(500, 90)

        self.setWindowTitle("Score Program")
        self.move(300, 300)
        self.resize(600, 400)
        self.show()


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec_())
