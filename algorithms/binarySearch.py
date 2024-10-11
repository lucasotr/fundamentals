def binarySearch(array, target):
    leftPointer = 0
    rightPointer = len(array)

    while(leftPointer <= rightPointer):
        middlePointer = (leftPointer + rightPointer) // 2

        if array[middlePointer] == target:
            return f"Target found in index: {middlePointer}"
        elif array[middlePointer] < target:
            leftPointer = middlePointer + 1
        else:
            rightPointer = middlePointer -1
    return "Target not found"