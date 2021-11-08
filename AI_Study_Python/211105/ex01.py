from openpyxl import Workbook

wb = Workbook()
ws = wb.active

ws.title = "qwerty"
wb.save("a.xlsx")
wb.close()
