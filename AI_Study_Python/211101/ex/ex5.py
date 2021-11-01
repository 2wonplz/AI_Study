gcm = 0
i = 42

while True:
    if 42 % i == 0 and 120 % i == 0:
        gcm = i
        break
    else:
        i -= 1

print(gcm)
