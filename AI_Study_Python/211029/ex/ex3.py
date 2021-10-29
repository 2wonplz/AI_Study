def main():
    num = input("정수를 입력하세요 : ")
    if num.isdigit() == True:
        num = eval(num)
        print(num * num)
    else:
        print("정수가 아닙니다.")


main()
