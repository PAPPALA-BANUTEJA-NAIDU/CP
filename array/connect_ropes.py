from heapq import *

def min_cost(arr):
    min_heap = []
    for num in arr:
        heappush(min_heap, num)

    result = 0

    while(len(min_heap) > 1):
        num = heappop(min_heap) + heappop(min_heap)
        result += num
        heappush(min_heap, num)
    return result

def main():

  print("Minimum cost to connect ropes: " +
          str(min_cost([1, 3, 11, 5])))
  print("Minimum cost to connect ropes: " +
        str(min_cost([3, 4, 5, 6])))
  print("Minimum cost to connect ropes: " +
        str(min_cost([1, 3, 11, 5, 2])))


main()
