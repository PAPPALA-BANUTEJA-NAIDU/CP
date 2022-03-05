n = input()
k = int(input())
ans = 0
ind = -100
arr = input().split()
for i in range(k):
    count = arr[i].count(str(n))
    print(count)
    if(count > ind):
        ind = count
        ans = arr[i]
print(ans)
