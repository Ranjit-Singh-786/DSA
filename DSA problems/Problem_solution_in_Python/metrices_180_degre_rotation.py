# Quizes on metrics rotate 180 degree
#clock wise and anticlockwise output will be same.

metrics = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

# output for 180 degree 
# [9, 8, 7]   
# [6, 5, 4]
# [3, 2, 1]

## <<<<<<<<<<<<<<<<  solution no. 1   >>>>>>>>>>>>>>>>>>
for i in range(2,-1,-1):
    print(metrics[i][::-1])

## <<<<<<<<<<< solution no. 2  >>>>>>>>>>>>>>>

num_rows = len(metrics)
num_cols = len(metrics[0])

rotated_metrics = [[0] * num_rows for _ in range(num_cols)]
rotated_metrics

row = 0 
for i in range(2,-1,-1):
    rotated_metrics[row] = metrics[i][::-1]
    row +=1
print(rotated_metrics)
