from heapq import *

def top(arr, k):
    result = []
    for num in arr:
        if(len(result) < k):
            heappush(result, num)
        else:
            if(num > result[0]):
                heappop(result)
                heappush(result, num)
    return result

def main():

  print("Here are the top K numbers: " +
        str(top([3, 1, 5, 12, 2, 11], 3)))

  print("Here are the top K numbers: " +
        str(top([5, 12, 11, -1, 12], 3)))


main()
