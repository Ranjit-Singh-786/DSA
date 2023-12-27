
def exponential_search(arr,target):
    if arr[0] == target:
        return 0
    i = 1
    n = len(arr)
    while (i<=n) and (arr[i]<=target):
        i = i*2

    #binary search implementation in exponential
    left , right = i//2 ,min(i,n-1)
    while left <=right:
        
        mid = (left+right)//2
        if arr[mid]==target:
            return mid
        if target > arr[mid]:
            left = mid + 1
        else:
            right = mid -1
    return -1

arr  = list(range(0,205))
target = 206
result = exponential_search(arr=arr,target=target)
if result != -1:
    print(f"target element founded on this position {result} and element is {arr[result]}")
else:
    print(f"element is not founded")