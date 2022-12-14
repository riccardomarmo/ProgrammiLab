import math
import matplotlib.pyplot as plt
import numpy as np

class Funzione: 

    def eval(self,x): # funzione che restituisce f(x) 
        pass

    def calcolo_integrale(self, a, b, M):
        h = (b-a)/M

        risultato = 0
        for i in range(0, M-1):
            risultato += self.eval(a + i*h)

        if risultato < 0:
            risultato = -risultato

        return risultato*h


class F1(Funzione):

    def eval(self, x):
        return x**2


class F2(Funzione):

    def eval(self, x):
        return math.e**(2*x)


class F3(Funzione):

    def eval(self, x):
        return x/(1+x**2)


ciao = F1()

print("{}".format(ciao.calcolo_integrale(0,1,10000000)))




