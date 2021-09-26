def subsets_dup(arr):
    subsets = []
    subsets.append([])
    start, end = 0, 0
    for i in range(len(arr)):
        start = 0

        if i > 0 and arr[i] == arr[i-1]:
            start = end
        end = len(subsets)

        for j in range(start, end):
            temp = subsets[j].copy()
            temp.append(arr[i])
            subsets.append(temp)
    return subsets


arr = [int(x) for x in input().split()]
print(subsets_dup(arr))
