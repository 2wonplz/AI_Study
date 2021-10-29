i = 0

while True:
    i = i + 1
    if i % 2 == 0:
        continue
    if i > 100:
        break
    print(i, end=' ')
