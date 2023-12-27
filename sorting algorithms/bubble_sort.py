## Sorting in ascending order using bubble sort

def Bubble_sort(arr):
    temp = 0
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if arr[i] > arr[j]:
                temp   = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    return arr

arr = [52,14,52,36,45,12,25,1,56,78,85,45,96,25,14,25,631]
print('Unsorted array :',arr)
sorted_arr = Bubble_sort(arr)
print('sorted array :',sorted_arr)



## Sorting in Descending order using Bubble sort

def Bubble_sort_desc(arr):
    temp = 0
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if arr[i] < arr[j]:
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    return arr

arr2 = [52,14,52,36,45,12,25,1,56,78,85,45,96,25,14,25,631]
print()
print("Sorting in Descending Order",'\n')
print('Unsorted array :',arr2)
sorted_arr2 = Bubble_sort_desc(arr2)
print("Sorted array :",sorted_arr2)