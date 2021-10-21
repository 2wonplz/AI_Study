'''
    자바에서는 문자열 + 숫자형이면 자동으로 문자열 연산을 함
    하지만 파이썬에서는 에러 (can only concatenate str (not "int") to str)
'''

# input 함수로 받은 값은 문자열로 저장됨

str = input("How old are you? : ")
print(str, type(str))

a = input("num : ")
print(a, type(a))

# 숫자로 바꾸려면 eval 함수 사용

year = input("This year : ")
print(year)
year = eval(year)
year = year + 1
print("Next year : ", year)

'''
    eval 함수는 문자열로 들어온걸 확인해서
    1. 함수 호출이면 함수 호출도 해주고
    2. 1 + 2 같은 계산도 해줌
    3. 숫자가 들어왔으면 숫자 타입으로 변경
'''
etc = input("뭐든 넣어요 : ")
result = eval(etc)  # result = eval(input("뭐든 넣어요 : "))
print(result)
