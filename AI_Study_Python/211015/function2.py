# function1 에서 greet 함수를 호출
# function1에 있는 함수가 먼저 실행되고 나머지가 진행됨
from function1 import greet1, greet2

# greet1()
# greet2()

greet2('Jane', 21)


def adder(num1, num2):
    result = num1 + num2
    return result


print(adder(5, 3))

'''
>>> def adder(num1, num2):
...     result = num1 + num2
...     return result
...
>>> adder(5, 3)
8
'''
