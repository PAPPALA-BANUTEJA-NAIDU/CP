n = int(input())
for i in range(n):
    x = input()
    zeros = x.count("0")
    ones = x.count("1")
    twos = x.count("2")
    threes = x.count("3")
    fours = x.count("4")
    tem = str(zeros) + str(ones) + str(twos) + str(threes) + str(fours)
    print(tem)
    result = (tem == x)
    if result:
        print("YES")
    else:
        print("NO")
