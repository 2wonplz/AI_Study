lcm = 0
i = 45

while True:
    if i % 6 == 0 and i % 45 == 0:
        lcm = i
        break
    else:
        i += 1

print(lcm)
