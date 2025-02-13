def binary_search(arr,left,right,key):
    if left > right:
        return -1 # target not found 
    mid = (left + right)//2 
    if arr[mid]==key:
        return mid 
    elif arr[mid]<key:
        return binary_search(arr,mid+1,right,key)
    else:
        return binary_search(arr,left,mid - 1 , key) 
    

# Example Usage
arr = [1, 3, 5, 7, 9, 11, 13]
target = 70
result = binary_search(arr, 0, len(arr) - 1, target)
if result != -1:
    print(f"Target found at index {result}")
else:
    print("Target not found")