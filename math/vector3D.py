from math import acos
from numpy import sqrt, clip

class Vector3D:
    def __init__(self, x:float=0, y:float=0, z:float=0) -> None:
        self.x = x
        self.y = y
        self.z = z
    
    def magnitude(self) -> float:
        return sqrt(self.x ** 2 + self.y ** 2 + self.z ** 2)

    def normalize(self) -> 'Vector3D':
        magnitude = self.magnitude()
        if magnitude == 0:
            raise ValueError("Cannot normalize a zero vector")
        else:
            return Vector3D(self.x / magnitude,
                            self.y / magnitude,
                            self.z / magnitude)
        
    def dotProduct(self, firstVector3D:'Vector3D', secondVector3D:'Vector3D') -> float:
        return (firstVector3D.x * secondVector3D.x + 
                firstVector3D.y * secondVector3D.y + 
                firstVector3D.z * secondVector3D.z)

    def angleBetweenTwoVertices(self, fVector:'Vector3D', sVector:'Vector3D'):
        magnitudeA = fVector.magnitude() 
        magnitudeB = sVector.magnitude() 
        cosTheta = clip(self.dotProduct(fVector, sVector) / (magnitudeA * magnitudeB), -1, 1)
        return acos(cosTheta)

    def __add__(self, otherVector3D:'Vector3D'):
        return Vector3D(self.x + otherVector3D.x,
                        self.y + otherVector3D.y,
                        self.z + otherVector3D.z)

    def __sub__(self, otherVector3D:'Vector3D'):
        return Vector3D(self.x - otherVector3D.x,
                        self.y - otherVector3D.y,
                        self.z - otherVector3D.z)

    def __mul__(self, scalar:float|int) -> 'Vector3D':
        if not isinstance(scalar, (int, float)):
            raise TypeError('Scalar must be int or float')
        else:
            x = self.x * scalar
            y = self.y * scalar
            z = self.z * scalar
            return Vector3D(x, y, z)

    def __repr__(self) -> str:
        return f"Vector3D {self.x}, {self.y}, {self.z}"