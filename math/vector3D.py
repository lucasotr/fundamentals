from numpy import sqrt

class Vector3D:
    def __init__(self, x:float, y:float, z:float) -> None:
        self.x = x
        self.y = y
        self.z = z
    
    def magnitude(self):
        return sqrt(self.x ** 2 + self.y ** 2 + self.z ** 2)

    # Check if correct or if V * (1/||V||) is correct
    def normalize(self):
        if self.x or self.y or self.z is not 0.0:
            return 1 / self.magnitude()
    
    # Find appropriate dunder method for sum 
    # Q + P = (Qx + Px, Qy + Py, Qz + Pz)

    # Find appropriate dunder method for subtraction
    # Q - P = Q + (-P)

    # Find appropriate dunder method for multiplication
    # a * V = (aVx, aVy, aVz), where a is a scalar