import math 

class Figura():

    def perimetro():
        pass

    def area():
        pass

class Triangolo(Figura): 
    
    def __init__(self, latoA, latoB, latoC):
        self.latoA = latoA
        self.latoB = latoB
        self.latoC = latoC

    def perimetro(self):
        return self.latoA + self.latoB + self.latoC

    def area(self):

        semiP = self.perimetro() / 2

        area = math.sqrt(semiP*(semiP - self.latoA) * (semiP - self.latoB) * (semiP * self.latoC))

        return area

    def stampa(self):
        if(self.latoA == self.latoB and self.latoB == self.latoC):
            print("Equilatero")
        elif(self.latoA == self.latoB and self.latoA == self.latoC):
            print("Isoscele")
        else:
            print("Scaleno")
        

class Rettangolo(Figura):  

    def __init__(self, a, b):
        self.a = a
        self.b = b

    def perimetro(self):
        return self.a*2 + self.b*2
