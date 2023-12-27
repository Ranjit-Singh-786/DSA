# Binary search algorithm implementation in python,
# it divides the search space into two equal halves

def Binary_search(arr,target):
    arr.sort()
    left , right = 0 , len(arr)-1

    while left <= right:
        mid = (left + right)//2

        if arr[mid] == target:
            return mid
        elif arr[mid]>target:
            right = mid - 1
        else:
            left = mid + 1  
    return -1

sorted_list = [1, 3, 5, 7, 9, 11, 13, 15]
target_value = 13

result = Binary_search(arr=sorted_list,target=target_value)
if result != -1:
    print(f'founded target element on this position {result} and element is {sorted_list[result]}')
else:
    print(f'element not found !')