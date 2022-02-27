def search_quadruplets(arr, k):
    arr.sort()
    quadruplets = []
    for i in range(len(arr)-3):
        if i > 0 and arr[i] == arr[i-1]:
            continue
        for j in range(i+1, len(arr)-2):
            if j > i + 1 and arr[j] == arr[j-1]:
                continue
            search_pairs(arr, i, j, k, quadruplets)
    return quadruplets

def search_pairs(arr, first, second, k, quadruplets):
    left, right = second + 1, len(arr) - 1
    while(left <= right):
        temp_sum = arr[first] + arr[second] + arr[left] + arr[right]
        if(temp_sum == k):
            quadruplets.append([
                arr[first], arr[second], arr[left], arr[right]
            ])
            left += 1
            right -= 1
            while(left < right and arr[left] == arr[left - 1]):
                left += 1
            while(left < right and arr[right] == arr[right + 1]):
                right -= 1
        elif (temp_sum < k):
            left += 1
        else:
            right -= 1

def main():
  print(search_quadruplets([4, 1, 1, 2, -1, -3], 1))
  print(search_quadruplets([2, 0, -1, 1, -2, 2], 2))


main()

