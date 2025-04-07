def  calculator():
    num1 = (int(input('enter your first number: ')))
    op = (input('enter your operation: '))
    num2 = (int(input('enter your second number: ')))
    
    if op == '+':
        print(num1+num2)
    elif op == '-':
        print(num1-num2)
    elif op == '*':
        print(num1*num2)
    else:
        print(num1/num2)
calculator()