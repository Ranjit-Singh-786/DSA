# Rotate metrics 90 degree anticlock wise

metrics = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
# output for 90 degree 
# [3, 6, 9]
# [2, 5, 8]
# [1, 4, 7]
for i in range(2,-1,-1):
    temp = []
    for row in range(len(metrics)):
        temp.append(metrics[row][i])
    print(temp)
