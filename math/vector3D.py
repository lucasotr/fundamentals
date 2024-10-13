from numpy import sqrt

class Vector3D:
    def __init__(self, x:float, y:float, z:float) -> None:
        self.x = x
        self.y = y
        self.z = z
    
    def magnitude(self):
        return sqrt(self.x ** 2 + self.y ** 2 + self.z ** 2)

    def normalize(self) -> 'Vector3D':
        magnitude = self.magnitude()
        if magnitude == 0:
            raise ValueError("Cannot normalize a zero vector")
        else:
            return Vector3D(self.x / magnitude,
                            self.y / magnitude,
                            self.z / magnitude)
    
    def __add__(self, otherVector3D:'Vector3D'):
        return Vector3D(self.x + otherVector3D.x,
                        self.y + otherVector3D.y,
                        self.z + otherVector3D.z)

    def __sub__(self, otherVector3D:'Vector3D'):
        return Vector3D(self.x - otherVector3D.x,
                        self.y - otherVector3D.y,
                        self.z - otherVector3D.z)

    # Find appropriate dunder method for multiplication
    # a * V = (aVx, aVy, aVz), where a is a scalar

    def __repr__(self) -> str:
        return f"Vector3D {self.x}, {self.y}, {self.z}"