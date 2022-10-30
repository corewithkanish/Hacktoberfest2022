lass conversion:
    def __init__(self, cap):
        self.cap = cap
        self.top = -1
        self.arr = []
        self.new_arr = []
        self.precedence = {'^': 3, '*': 2, '/': 2, '+': 1, '-': 1, }

    def isempty(self):
        return True if self.top == -1 else False 

    def peek(self):
        return self.arr[-1]

    def push(self, new):
        self.top = self.top+1
        self.arr.append(new)

    def pop(self):
        if not self.isempty():
            self.top -= 1
            return self.arr.pop()
        return "$"

    def isopereand(self, ch):
        return ch.isalpha()

    def prec(self, i):
        try:
            a = self.precedence[i]
            b = self.precedence[self.peek()]
            return True if a <= b else False
        except KeyError:
            return False

    def intopost(self, sex):
        for i in sex:
            if self.isopereand(i):
                self.new_arr.append(i)
            elif i == '(':
                self.push(i)
            elif i == ')':
                while ((not self.isempty())and self.peek() != "("):
                    a = self.pop()
                    self.new_arr.append(a)
                if (not self.isempty()  and self.peek() != '('):
                    return -1
                else:
                     self.pop()
            else:
                while (not self.isempty()  and self.prec(i)):
                     self.new_arr.append(self.pop())
                self.push(i)

        while (not self.isempty() ):
            self.new_arr.append(self.pop())
        print ("".join(self.new_arr))
        
if __name__ == '__main__':
    

     ebp = "a*(b^c/(d/e-f)^g)+h"

     siz = conversion(len(ebp))

     siz.intopost(ebp)
