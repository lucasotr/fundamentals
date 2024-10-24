# Insertion sort with a loop invariable concept
# Starts i = 1 and consider j = i - 1 sorted 
# Compares i with j
# Change positions until its true
# Move to next iteration until i == n

def insertionSort(array):
    for i in range(1, len(array)): 
        key = array[i] # Initialization
        j = i -1
        # Maintenance
        while(j >= 0 and array[j] > key):
            array[j + 1] = array[j]
            j = j - 1
            array[j + 1] = key
    # Termination
    return array