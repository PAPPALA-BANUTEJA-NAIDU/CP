from collections import deque

def permutations(arr):
    result = []
    current_permutation = deque()
    current_permutation.append([])
    
    for element in arr:
        for _ in range(len(current_permutation)):
            previous_permutation = current_permutation.popleft()
            for i in range(len(previous_permutation) + 1):
                next_permutation = previous_permutation.copy()
                next_permutation.insert(i, element)

                if len(next_permutation) == len(arr):
                    result.append(next_permutation)
                else:
                    current_permutation.append(next_permutation)

    return result 

arr = [int(x) for x in input().split()]
print(permutations(arr))
