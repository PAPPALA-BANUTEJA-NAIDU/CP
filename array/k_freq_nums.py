from heapq import *

def k_freq(arr, k):
    freq = {}
    minheap = []
    result = []
    for num in arr:
        freq[num] = freq.get(num, 0) + 1

    for num, frq in freq.items():
        heappush(minheap, (frq, num))
        if(len(minheap) > k):
            heappop(minheap)

    while(minheap):
        result.append(heappop(minheap)[1])

    return result

def main():

  print("Here are the K frequent numbers: " +
        str(k_freq([1, 3, 5, 12, 11, 12, 11], 2)))

  print("Here are the K frequent numbers: " +
        str(k_freq([5, 12, 11, 3, 11], 2)))


main()


