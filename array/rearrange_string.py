from heapq import *

def rearrange(s):
    result = []
    freq = {}
    for char in s:
        freq[char] = freq.get(char, 0) + 1

    maxheap = []
    for char, frq in freq.items():
        heappush(maxheap, (-frq, char))
    previousChar, prevCount = None, 0
    while(maxheap):
        frq, char = heappop(maxheap)
        if(previousChar and -prevCount > 0):
            heappush(maxheap, (prevCount, previousChar))
        result.append(char)
        previousChar, prevCount = char, frq+1
    return "".join(result) if len(s) == len(result) else ""

def main():
  print("Rearranged string:  " + rearrange("aappp"))
  print("Rearranged string:  " + rearrange("Programming"))
  print("Rearranged string:  " + rearrange("aapa"))


main()

