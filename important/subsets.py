def subsets_arr(arr):
    subsets = []
    subsets.append([])
    for element in arr:
        for i in range(len(subsets)):
            temp = subsets[i].copy()
            temp.append(element)
            subsets.append(temp)
    return subsets

arr = [int(x) for x in input().split()]
print(subsets_arr(arr))

