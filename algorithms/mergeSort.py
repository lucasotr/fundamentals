# Algorithm divided in two
# Efficiency of n log n

# Efficiency of n
def merge(left, right):
    # Initialize loop invariant
    merged = []
    left_index, right_index = 0, 0
    
    # Maintenance: each iteration maintains merged in order
    while left_index < len(left) and right_index < len(right):
        if left[left_index] <= right[right_index]:
            merged.append(left[left_index])
            left_index = left_index + 1
        else:
            merged.append(right[right_index])
            right_index = right_index + 1
    
    merged = merged + (left[left_index:])
    merged = merged + (right[right_index:])

    # Terminate loop invariant
    return merged

    # Efficiency of log n
def mergeSort(array):
    arraySize = len(array)
    # Base case: array of 1 is sorted 
    if arraySize <= 1:
        return array 

    ## Divides n/2 and recursively calls itself
    arrayHalf = arraySize // 2
    # From 0 to half / from half to array 
    unsortedLeftArray = mergeSort(array[:arrayHalf])
    unsortedRightArray = mergeSort(array[arrayHalf:])

    return merge(unsortedLeftArray, unsortedRightArray)