#!/usr/bin/python3

def reverse(arr):
    left, right = 0, len(arr) -1
    while left < right:
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1
    return arr

print(reverse([1, 2, 3, 4, 5, 6]))
