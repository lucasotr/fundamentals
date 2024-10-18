from math import acos
from numpy import sqrt, clip

class Vector3D:
    def __init__(self, x:float=0, y:float=0, z:float=0) -> None:
        self.x = x
        self.y = y
        self.z = z
    
    def magnitude(self, vector:"Vector3D") -> float:
        return sqrt(vector.x ** 2 + vector.y ** 2 + vector.z ** 2)
    
    def sign(self, vector:"Vector3D") -> "Vector3D":
        signedVector = Vector3D()
        if vector.x == 0:
            signedVector.x = 0
        else: 
            signedVector.x = vector.x / abs(vector.x)
        if vector.y == 0:
            signedVector.y = 0
        else: 
            signedVector.y = vector.y / abs(vector.y)
        if vector.z == 0:
            signedVector.z = 0
        else: 
            signedVector.z = vector.z / abs(vector.z)
        return signedVector
       
    def distance(self, fromVector:"Vector3D", toVector:"Vector3D") -> "Vector3D":
        diffToVectFromVect = toVector - fromVector
        return Vector3D().magnitude(diffToVectFromVect)

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

    def angleBetweenTwoVectors(self, fVector:'Vector3D', sVector:'Vector3D'):
        magnitudeA = fVector.magnitude() 
        magnitudeB = sVector.magnitude() 
        cosTheta = clip(self.dotProduct(fVector, sVector) / (magnitudeA * magnitudeB), -1, 1)
        return acos(cosTheta)

    def __add__(self, otherVector3D:'Vector3D'):
        return Vector3D(self.x + otherVector3D.x,
                        self.y + otherVector3D.y,
                        self.z + otherVector3D.z)

    def __sub__(self, otherVector3D:'Vector3D'):
        return Vector3D(abs(self.x - otherVector3D.x),
                        abs(self.y - otherVector3D.y),
                        abs(self.z - otherVector3D.z))

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
    

test2 = Vector3D(2, 4, 4)
test3 = Vector3D(5, 4, 3)
test3 = test3.distance(test2, test3)
print(test3)
