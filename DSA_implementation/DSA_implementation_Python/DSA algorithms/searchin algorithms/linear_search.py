#linear search algorithm implementation in python

def linear_search(arr,target):
    for item_index in range(len(arr)):
        if arr[item_index]==target:
            return item_index   # i used return statement because if the element is found
                                # then function execution will be stope
    return -1

arr = [2,5,4,8,25,14,5,8,9,74,58,75,65,9]
target = 65
result = linear_search(arr=arr, target=target)
if result != -1:
    print(f"Target element {target} is found at this position {result} founded element {arr[result]}")
else:
    print(f"Target element {target} is not found")