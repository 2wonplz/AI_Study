# 4.1
def div(n1, n2):
    a = n1 // n2
    b = n1 % n2
    print(n1, "÷", n2, "의 몫 :", a, ", 나머지 :", b)


div(5, 2)


# 4.2
def bet_sum(n1, n2):
    sum = 0
    for i in range((n1 + 1), n2):
        sum += i
    print(sum)


bet_sum(2, 5)
bet_sum(1, 5)

# 5.1
st = [1, 2, 3, 4]
print(st[0])
print(st[1])
print(st[2])
print(st[3])

# 5.2
st = [1, 2, 3, 4]
print(st[0])
print(st[-3])
print(st[-2])
print(st[-1])

# 5.3
st = [1, 2, 3, 4]
st[0] += 1
st[1] += 1
st[2] += 1
st[3] += 1
print(st)

# 5.4
st = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for i in range(10):
    st[i] += 1
print(st)

# 5.5
st = [1, 2, 3, 4, 5, 6]
st[0], st[5] = st[5], st[0]
print(st)
