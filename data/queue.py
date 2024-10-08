from sNode import Node as node

class Queue:
    def __init__(self) -> None:
        self.head = None
        self.tail = None
    
    def enqueue(self, data):
        newNode = node(data)
        if self.tail is None:
            self.tail = newNode
        else:
            self.tail.next = newNode
            self.tail = newNode
        if self.head is None:
            self.head = newNode
    
    def dequeue(self):
        if self.head is None:
            raise IndexError("Empty Queue")
        else:
            temp = self.head.data
            self.head = self.head.next
            return temp
    
    def peek(self):
        return self.head.data
    
    def __repr__(self) -> str:
        if self.head is None:
            raise IndexError("Empty Queue")
        else:
            merged = ""
            pointer = self.head
            while (pointer.next):
                merged = merged + str(pointer.data) + " -> "
                pointer = pointer.next
            return merged + str(pointer.data)