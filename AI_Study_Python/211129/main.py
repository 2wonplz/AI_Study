import sys
from PyQt5.QtWidgets import *
import webma


class MyApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initui()

    def start(self):
        id = self.tableWidget.item(0, 2).text()
        pw = self.tableWidget.item(0, 3).text()
        webma.dostart(id, pw)

    def initui(self):
        self.qbtn = QPushButton("시작", self)
        self.qbtn.clicked.connect(self.start)

        self.tableWidget = QTableWidget()
        self.tableWidget.setRowCount(20)
        self.tableWidget.setColumnCount(4)
        self.tableWidget.setHorizontalHeaderLabels(["선택", "이름", "아이디", "비밀번호"])

        self.tableWidget.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)

        for row in range(10):
            self.tableWidget.setCellWidget(row, 0, QCheckBox())

        self.tableWidget.setItem(0, 1, QTableWidgetItem())
        self.tableWidget.setItem(0, 2, QTableWidgetItem())
        self.tableWidget.setItem(0, 3, QTableWidgetItem())

        hbox = QVBoxLayout()
        hbox.addWidget(self.qbtn)
        hbox.addWidget(self.tableWidget)

        self.setLayout(hbox)

        self.setWindowTitle("First App")
        self.move(300, 300)
        self.resize(400, 200)
        self.show()


if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = MyApp()
    sys.exit(app.exec_())
