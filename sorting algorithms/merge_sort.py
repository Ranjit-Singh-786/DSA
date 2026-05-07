def merge_sort(arr):
    if len(arr)<=1:
        return arr
    mid  = len(arr)//2 
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid: ])
    return merge(left,right)

def merge(left,right):
    n = len(left)
    m = len(right) 
    i = j= 0 
    merge_arr = []
    while i<n and j<m:
        if left[i] < right[j]:
            merge_arr.append(left[i])
            i+=1
        else:
            merge_arr.append(right[j])
            j+=1
    # Append any remaining elements from either list
    merge_arr.extend(left[i:])
    merge_arr.extend(right[j:])
    return merge_arr

arr2 = [52,14,52,36,45,12,25,1,56,78,85,45,96,25,14,25,631]
print("Original array:", arr2)
print("Sorted array:", merge_sort(arr2))
