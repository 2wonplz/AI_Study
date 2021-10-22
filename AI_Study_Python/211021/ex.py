# 1
n1 = eval(input("첫 번째 입력 : "))
n2 = eval(input("두 번째 입력 : "))
print("두 입력의 합 :", (n1 + n2))

# 2
sum = 0
for i in [1, 3, 5, 7, 9]:
    sum += i
print(sum)

# 3
mul = 1
for i in range(1, 11):
    mul *= i
print(mul)

# 4
for i in range(1, 10):
    print(7, "X", i, "=", (7 * i))

# 5
for i in [9, 8, 7, 6, 5, 4, 3, 2, 1]:   # == range(9, 0, -1)
    print(7, "X", i, "=", (7 * i))


# 6
def exp(x, y):
    mul = 1
    for i in range(1, (y + 1)):   # == range(y)
        mul *= x
    print(mul)


exp(2, 3)


# 7
def greet():
    greet = eval(input("인사를 몇 번 할까요? : "))
    for i in range(1, (greet + 1)):   # == range(greet)
        print("반갑습니다.")


greet()
