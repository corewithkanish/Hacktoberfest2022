from ast import Try


class evaluation:
    def __init__(self, cap):
        self.cap = cap
        self.top = -1
        self.arr = []

    def isempty(self):
        return True if self.top == -1 else False
    
    def isop(self, ch):
        return ch.isalpha()
    def pop(self):
        if not self.isempty():
            self.top = self.top-1
            return self.arr.pop()
        else:
            return "$"
    # def isoperand(self,c):

   
    #     return self.isdigit(c)
    def push(self, i):
        self.top = self.top+1
        self.arr.append(i)

    def evtopost(self, lene):
      
        for i in (lene):
            if i.isdigit():
                self.push(i)
            else:
                num1 = self.pop()
            
                num2 = self.pop()
            

                self.push(str(eval(num2 +i+num1)))

              
        return int(self.pop())


st = "1992*+"
num = evaluation(len(st))
print ("postfix evaluation: %d"%(num.evtopost(st)))
