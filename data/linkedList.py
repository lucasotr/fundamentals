from sNode import Node as node

class LinkedList:
    def __init__(self) -> None:
        self.head = None
    
    def append(self, data):
        newNode = node(data)
        if self.head is None:
            self.head = newNode
        else:
            pointer = self.head
            while(pointer.next):
                pointer = pointer.next
            pointer.next = newNode
    
    def __repr__(self):
        if self.head is None:
            raise IndexError("Empty list")
        else:
            merged = ""
            pointer = self.head
            while(pointer.next):
                merged = merged + str(pointer.data) + " -> "
                pointer = pointer.next
            return merged + str(pointer.data)