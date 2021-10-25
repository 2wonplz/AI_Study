# 5.2.1
st = [1, 2, 3, 4, 5]
st[1:4] = [3]
print(st)

# 5.2.2
st = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
nt = st[:10:2]
print(nt)

# 5.2.3
st = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
nt = st[1:10:2]
print(nt)


# 5.2.4
def sum_all(str):
    sum = 0
    for i in range(0, len(str)):
        sum += str[i]
    return sum


result = sum_all([1, 2, 3, 4, 5])
print(result)


# 5.2.5
def show_reverse(str):
    str.reverse()
    return str


result = show_reverse([1, 2, 3, 4, 5])
print(result)

# result = show_reverse("ABCDEF")  보류
# print(result)


# 6.1.1
st = []
st.append(1)
st.append(2)
st.append(3)
print(st)
st.pop(0)
st.pop(0)
st.pop(0)
print(st)

# 6.1.2
st = []
st.append(1)
st.append(2)
st.append(3)
print(st)
st.pop(2)
st.pop(1)
st.pop(0)
print(st)

# 6.1.3
st = [1, 2, 3, 4]
st[:] = []
print(st)

# 6.1.4
st = []

for i in range(10):
    st.append(i + 1)

print(st)

for i in range(10):
    st.pop(0)

print(st)

# 6.1.5
st = []

for i in range(10):
    st.append(i + 1)

print(st)

for i in range(10, 0, -1):
    st.pop(i - 1)

print(st)

# 6.1.6
st = [1, 2]
st[3:] = [3, 4, 5]
print(st)

# 6.2.1
str = "The Espresso Spirit"

print(str.upper())
print(str.lower())
print(str)


# 6.2.2
def birth_only(str):
    birth = str.split("-")
    return birth[0]


a = birth_only("070629-2011xxx")
print(a)

a = birth_only("090716-1012xxx")
print(a)
