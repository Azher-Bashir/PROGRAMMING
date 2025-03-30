num1 = (input('Enter the first number: '))

selection = input('Enter the operation you wawnt to perform: ')

num2 = (input('Enter the second number: '))
if selection == '+':
    result = num1 + num2
elif selection == '-':
    result = num1 - num2
elif selection == '*':
    result = num1 * num2
elif selection == '/':
    result = num1 / num2
else:
    print('Invalid operation')