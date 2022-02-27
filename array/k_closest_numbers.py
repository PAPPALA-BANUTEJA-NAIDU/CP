from heapq import *

def find_closest_elements(arr, k, x):
    min_heap = []
    index = binary_search(arr, x)
    low, high = max(index - k, 0), min(index + k, len(arr) - 1)

    for i in range(low, high+1):
        heappush(min_heap, (abs(x - arr[i]), arr[i]))

    result = []
    for i in range(k):
        result.append(heappop(min_heap)[1])
    result.sort()
    return result

def binary_search(arr, x):
    low, high = 0, len(arr)-1
    while(low <= high):
        mid = (low+high) //2
        if(arr[mid] == x):
            return mid
        elif(arr[mid] > x):
            high = mid - 1
        else:
            low = mid + 1
    if(low > 0):
        return low-1
    return low


def main():
  print("'K' closest numbers to 'X' are: " +
        str(find_closest_elements([5, 6, 7, 8, 9], 3, 7)))
  print("'K' closest numbers to 'X' are: " +
        str(find_closest_elements([2, 4, 5, 6, 9], 3, 6)))
  print("'K' closest numbers to 'X' are: " +
        str(find_closest_elements([2, 4, 5, 6, 9], 3, 10)))


main()
