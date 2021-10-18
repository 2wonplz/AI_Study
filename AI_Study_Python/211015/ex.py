# 1. 함수명 MH를 선언하고 함수를 호출하면 1~5까지 더해서 출력하도록 하자
def MH():
    n = 1 + 2 + 3 + 4 + 5
    print(n)


'''
    result = 0
    for n in [1, 2, 3, 4, 5]:
        result += n
    printf(result)
'''

MH()


# 2. 전달값을 보내고 전달받은 값을 3번 출력하는 함수를 작성해보자
def doA(A):
    print(A)
    print(A)
    print(A)


doA('HI')


# 3. 음수를 보내면 양수가 출력되고, 양수를 보내면 음수가 출력되도록 하자
def doB(n):
    n *= -1
    print(n)


doB(-1)
doB(1)


# 4. 두 수를 보내면 두 수를 합하고 나누기 2를 하도록 해서 출력되도록 하자
def doC(a, b):
    n = (a + b) / 2
    print(n)


doC(3, 4)
