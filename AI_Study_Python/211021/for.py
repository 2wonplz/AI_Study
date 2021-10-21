'''
a = [0, 1, 2, 3]
for i in a:
    print(i)
    print("Hi")
'''

for i in [0, 1, 2, 3]:
    print(i)
    print("Hi")

sum = 0
# range(1, 11) == [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for i in [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
    sum += i
print(sum)

# 첫번째 0은 생략가능
for i in range(3):  # == range(0, 3)
    print("Hi")
