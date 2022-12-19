class Primo:

    def __init__(self, max):
        self.max = max
        self.n = 1
        self.conta = 1

    def __iter__(self):
        return self

    def isPrime(self):

        for i in range(2, self.n):
            if self.n != i and self.n % i == 0:
                return False
            
        return True

             

    def __next__(self):
        while True:
            self.n += 1        
            if self.conta <= self.max:    
                if self.isPrime() == True:     
                    self.conta += 1 
                    return self.n
            else:
                raise StopIteration 


myNum = Primo(20)
myIter = iter(myNum)

while True: 
    try:
        print("{}\n".format(next(myIter)))
    except StopIteration:
        break

