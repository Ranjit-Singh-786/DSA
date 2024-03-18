# Rotate metrice 90 degree clock wise
metrics = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
# output for 90 degree clockwise output
# [7, 4, 1]
# [8, 5, 2]
# [9, 6, 3]


for i in range(len(metrics)):
    temp = []
    for row in range(len(metrics)):
        temp.append(metrics[row][i])
    print(temp[::-1])
