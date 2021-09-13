import math
with open("input.txt") as inf:
    a = []
    b = []
    for x in inf:
        for y in x.split(' '):
            b.append(int(y))
        a.append(b)
        b = []
        # print(x)
with open("output.txt", "w") as ouf:
    ouf.write(str(a))
# print(a)

hor_product = 1
ver_product = 1
diag_product = 1

for i in range(len(a)):
    for j in range(len(a)):
        if(j + 4 <= len(a)):
            for k in range(4):
                temp *= a[i][j + k]
        if hor_product < temp :
            hor_product = temp

# print(len(a))