#!/usr/bin/python3

def min_max(arr, left, right):
    if left == right:
        return arr[left], arr[left]
    elif right == left + 1:
        if arr[left] > arr[right]:
            return arr[left], arr[right]
        else:
            return arr[right], arr[left]
    else:
        mid = (left + right) // 2
        max1, min1 = min_max(arr, left, mid)
        max2, min2 = min_max(arr, mid+1, right)
    return max(max1, max2), min(min1, min2)

arr = [1000, 11, 445, 1, 330, 3000]
print(min_max(arr, 0, len(arr)-1))
