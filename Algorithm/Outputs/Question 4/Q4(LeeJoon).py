from pprint import pprint

arr = []
a = [int(i) for i in "1 0 1 1 1 1 1 1 1 1".split()]
b = [int(i) for i in "1 0 0 1 0 0 0 0 0 1".split()]
c = [int(i) for i in "1 0 0 1 1 1 0 0 0 1".split()]
d = [int(i) for i in "1 0 0 0 0 0 0 1 0 1".split()]
e = [int(i) for i in "1 0 0 0 0 0 0 1 0 1".split()]
f = [int(i) for i in "1 0 0 0 0 1 0 0 0 1".split()]
g = [int(i) for i in "1 0 0 0 0 1 2 0 0 1".split()]
h = [int(i) for i in "1 0 0 0 0 1 0 0 0 1".split()]
i = [int(i) for i in "1 0 0 0 0 0 0 0 0 1".split()]
j = [int(i) for i in "1 1 1 1 1 1 1 1 1 1".split()]

arr.append(a)
arr.append(b)
arr.append(c)
arr.append(d)
arr.append(e)
arr.append(f)
arr.append(g)
arr.append(h)
arr.append(i)
arr.append(j)

step1, step2 = 0, 1

while True:
    arr[step1][step2] = 9

    if step1 == 8 and step2 == 8:
        break

    elif arr[step1][step2+1] == 2:
        step2 += 1
    elif arr[step1][step2+1] != 0:
        step1 += 1
    else:
        step2 += 1
pprint(arr)