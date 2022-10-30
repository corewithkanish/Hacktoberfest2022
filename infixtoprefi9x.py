from asyncore import poll3


def isoperand(c):
    return (not (c >= 'a' and c <= 'z') and not (c >= '0' and c <= '9') and not (c >= 'A' and c <= 'Z'))


def pre(new):
    if (new == '+' or new == '-'):
        return 1
    elif (new == '*' or new == '/'):
        return 2
    elif (new == '^'):
        return 3
    return 0


def intorpre(arr):
    operator = []
    operand = []
    for i in range(len(arr)):
        if (arr[i] == '('):
            operator.append(arr[i])
        elif (arr[i] == ')'):
            while (len(operator) != 0 and operator[-1] != '('):
                op1 = operand[-1]
                operand.pop()

                op2 = operand[-1]
                operand.pop()

                op = operator[-1]
                operator.pop()

                tmp = op + op2 + op1
                operand.append(tmp)
            operator.pop()    
        elif (not pre(arr[i])):
            operand.append(arr[i] + " ")
        else:
            while (len(operator) != 0 and pre(arr[i]) <= pre(operator[-1])):
                op1 = operand[-1]
                operand.pop()

                op2 = operand[-1]
                operand.pop()

                op = operator[-1]
                operator.pop()

                tmp = op + op2 + op1
                operand.append(tmp)
            operator.append(arr[i])

    while (len(operator) != 0):
        op1 = operand[-1]
        operand.pop()

        op2 = operand[-1]
        operand.pop()

        op = operator[-1]
        operator.pop()

        tmp = op + op2 + op1
        operand.append(tmp)

    return operand[-1]


s = "(A-B/C)*(A/K-L)"
print(intorpre(s))
