alist = [1, 2, 3]
btuple = (1, 2, 3)

print(alist)
print(btuple)

for i in alist:
    print("alist i =", i)

for i in btuple:
    print("btuple i =", i)

alist[2] = 5
print(alist)

# btuple[2] = 5
# print(btuple)
