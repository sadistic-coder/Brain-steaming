import pprint

arr = [ [0 for i in range(7)] for i in range(7)]
cnt1 = 0
cnt2 = 0

for i in range(3):
    a, b = [int(i)-1 for i in input().split()] 

    arr[a][b] = 2
    cnt2 += 1
    for j in range(7):
        if arr[a][j] == 0:
            arr[a][j] = 1

    for j in range(7):
        if arr[j][b] == 0:
            arr[j][b] = 1

for i in arr:
    cnt1 += i.count(1)
pprint.pprint(arr)
print(cnt1, cnt2)
