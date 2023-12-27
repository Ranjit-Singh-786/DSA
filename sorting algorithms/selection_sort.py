## Selection Sort Ascending Order

def Selection_sort(arr):
    temp = 0
    for i in range(len(arr)):
        min_index  = i
        for j in range(i+1,len(arr)):

            #This logic just finding minimum element from unsorted array space
            if arr[j] < arr[min_index]:
                min_index = j

        temp = arr[i]
        arr[i] = arr[min_index]
        arr[min_index] = temp
    return arr

arr = [65,22,35,11,64]
print('Unsorted array :',arr)
sorted_arr = Selection_sort(arr)
print('Sorted array :',sorted_arr)



## Selection Sort Ascending Order

def Selection_sort(arr):
    temp = 0
    for i in range(len(arr)):
        min_index  = i
        for j in range(i+1,len(arr)):

            #This logic just finding maximum element from unsorted array space
            if arr[j] > arr[min_index]:
                min_index = j
                
        temp = arr[i]
        arr[i] = arr[min_index]
        arr[min_index] = temp
    return arr

arr2 = [65,22,35,11,64]
print()
print('Sorting in Descending order')
print('Unsorted array :',arr2)
sorted_arr2 = Selection_sort(arr)
print('Sorted array :',sorted_arr2)