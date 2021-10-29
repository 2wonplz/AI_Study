def main():
    num = eval(input("정수를 입력하세요 : "))
    if num < 0:
        print("입력한 값은 0보다 작습니다.")
    elif 0 <= num < 10:
        print("입력한 값은 0 이상 10 미만입니다.")
    elif 10 <= num < 20:
        print("입력한 값은 10 이상 20 미만입니다.")
    else:
        print("입력한 값은 20 이상입니다.")


main()
