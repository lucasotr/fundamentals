def linearSearch(array, x):
    # No elements to check initialization = None
    for i in range(len(array)): 
        # For all i checks maintenance of array[n]
        if array[i] == x:
            return i    
    # All elements checked termination = None
    return None 