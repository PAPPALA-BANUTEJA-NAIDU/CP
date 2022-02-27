from heapq import *

def sum_bt(arr, k1, k2):
    minheap = []
    for num in arr:
        heappush(minheap, num)

    k = 0
    result = 0
    while(minheap):
        k += 1
        num = heappop(minheap)
        if k > k1 and k < k2:
            result += num

    return result

def main():

  print("Sum of all numbers between k1 and k2 smallest numbers: " +
        str(sum_bt([1, 3, 12, 5, 15, 11], 3, 6)))
  print("Sum of all numbers between k1 and k2 smallest numbers: " +
        str(sum_bt([3, 5, 8, 7], 1, 4)))


main()

