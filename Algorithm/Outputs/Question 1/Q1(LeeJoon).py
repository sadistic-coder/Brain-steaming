num = int(input())

result = []
while num != 1:
    result.append(num)

    if num % 3 == 0:
        num = num // 3
    elif num % 3 == 1:
        num = 5 * num - 2
    else:
        num = num * 5 -1

index = result.index(min(result))
print(index + 1)