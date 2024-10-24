def selectionSort(array):
    for i in range(0, len(array)):
        # Initialize: 
        smallest = i # Assume it is sorted
        
         # Maintenance
        j = i + 1 # Rest of array
        while (j < len(array)) : 
            if array[i] > array[j]:
                smallest = j
            j = j + 1 
        # Array[i] has to be smaller in asceding
        array[i], array[smallest] = array[smallest], array[i]
    
    # Termination
    return array