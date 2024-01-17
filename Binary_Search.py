# Binary Search

import numpy as np

def binary_search(data_list, item_index):
    low_index = 0
    high_index = len(data_list) - 1
    i = 0
    
    while low_index <= high_index:
        mid_index = (low_index + high_index) // 2
        guess_index = data_list[mid_index]
        
        if guess_index == item_index:
            i += 1
            return (mid_index, i)
        if guess_index > item_index:
            high_index = mid_index - 1
            i += 1
        else:
            low_index = mid_index + 1
            i += 1
    return None

test_list = list(range(0, 100))
print(f'The input list is:\n{test_list}')

result = binary_search(test_list, 5)
if result != None:
    print(f'The position of the search item and the number of iterations taken are in the tuple:\n{result}')
else:
    print(f'The search item is not in the input list')

print(f'The ceiling log n (base 2) of this algorithm is {np.ceil(np.log2(len(test_list)))}')
