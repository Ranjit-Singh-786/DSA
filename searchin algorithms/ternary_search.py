# implementing ternery search algorithm in python
# Time Complexity:
# The time complexity of ternary search is O(log3(n)), which is equivalent to O(log2(n)) in terms of big O notation.

# Usage:
# Ternary search is useful when the data is uniformly distributed and you need to find an element in a sorted list.

# Note:
# Ternary search is not commonly used in practice because its performance is often comparable to binary search, 
# but binary search is simpler to implement.

def ternary_search(arr,target):
    left , right = 0 ,len(arr)-1

    while left <=right:

        # finding 2 mid point for the search space
        mid1 = left + (right - left) // 3
        mid2 = mid1 + (right - left) // 3

        if arr[mid1] == target:
            return mid1
        if arr[mid2] == target:
            return mid2
        
        # updating the mid point
        if target < arr[mid1]:
            right = mid1 - 1

        elif target > arr[mid2]:
            left  = mid1 + 1
        else:
            left = mid1 + 1
            right = mid2 - 1        
    return -1

# Example Usage
arr = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
target = 7

result = ternary_search(arr=arr,target=target)
if result != -1:
    print(f'target element founded on this position {result} element is {arr[result]}')
else:
    print(f"target element {target} is not found !")