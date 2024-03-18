## write a function to calculate the ( MEAN , MEDIAN , MODE )

def calculate_mode(num_lst):
    # Count the frequency of each number
    frequency = {}
    for number in num_lst:
        frequency[number] = num_lst.count(number)

    # Find the maximum frequency
    max_frequency = max(frequency.values())

    # Find numbers with maximum frequency (mode)
    mode = [num for num, freq in frequency.items() if freq == max_frequency]

    return mode


def calculate_median(num_lst):
    n = len(num_lst)
    num_lst.sort()

    if n % 2 == 0:
        # write formula for even
        n1 , n2 = n//2,(n//2)+1
        median = (n1 + n2)
        return num_lst[(median//2)-1] 
    else:
        # write formula for odd
        return num_lst[((n+1)//2)-1] 


def calculate_mean(num_lst):
    n  = len(num_lst)-1
    total = 0
    for item in num_lst:
        total += item
    return mean = total/n
