import sys
from PyQt5.QtWidgets import *
from PyQt5 import uic
from PyQt5.uic import loadUi
from PyQt5 import QtWidgets
from project3 import ProjectExcel
from project4 import Typing


class MyApp(QDialog):
    def __init__(self):
        super(MyApp, self).__init__()
        self.pe = ProjectExcel()
        loadUi("remake2.ui", self)
        self.sendbtn.clicked.connect(self.nextPage)
        self.rowIndex = 0
        self.initEvent()
        self.loadfile()

    def loadfile(self):
        rows = self.pe.loadrow()
        for row in rows:
            self.tableWidget.setCellWidget(self.rowIndex, 0, QCheckBox())
            self.tableWidget.setItem(self.rowIndex, 1, QTableWidgetItem(row[1]))
            self.tableWidget.setItem(self.rowIndex, 2, QTableWidgetItem(row[2]))
            self.rowIndex += 1

    def push(self):
        checkbox = self.tableWidget.setCellWidget(self.rowIndex, 0, QCheckBox())
        name = self.name_edit.text()
        number = self.number_edit.text()

        self.tableWidget.setItem(self.rowIndex, 0, QTableWidgetItem(checkbox))
        self.tableWidget.setItem(self.rowIndex, 1, QTableWidgetItem(name))
        self.tableWidget.setItem(self.rowIndex, 2, QTableWidgetItem(number))

        self.pe.appendrow("0", name, number)

        self.rowIndex += 1

    def create(self):
        self.pe.createfile()

    def initEvent(self):
        self.push_btn.clicked.connect(self.push)
        self.create_btn.clicked.connect(self.create)

    def nextPage(self):
        widget.setCurrentIndex(widget.currentIndex() + 1)


class SendingMessage(QDialog):
    def __init__(self):
        super().__init__()
        loadUi("page2.ui", self)
        self.backbtn.clicked.connect(self.backbtned)
        self.ty = Typing()
        self.loadText()

    def loadText(self):
        message = self.ty.returnMessage()
        self.textEdit.append(message)

    def backbtned(self):
        widget.setCurrentIndex(widget.currentIndex() - 1)


if __name__ == "__main__":
    app = QApplication(sys.argv)

    widget = QtWidgets.QStackedWidget()

    mainWindow = MyApp()
    sendingPage = SendingMessage()

    widget.addWidget(mainWindow)
    widget.addWidget(sendingPage)

    widget.setFixedHeight(467)
    widget.setFixedWidth(431)
    widget.show()

    app.exec_()
