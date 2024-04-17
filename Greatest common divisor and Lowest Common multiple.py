def add(number1, number2):
    Sum=number1 + number2
    print(Sum)
    
def GCD(number1, number2):
    i=1
    for i in range(i,number1+1):
        if (number1%i==0) & (number2%i==0):
            CD.append(i)
    GCD=max(CD)
    result=f'Greatest Common Divisor is {GCD}'
    print(result)
    return GCD
    
def LCM(number1, number2,ResultOfGCD):
    LCM=(number1*number2)/ResultOfGCD
    result=f'Lowest Common Multiple is {LCM}'
    print(result)
    return 0
CD=[]


while True:
    number1 = input('input natural number')
    number1 = int(number1.replace(' ',''))
    number2 = input('input natural number')
    number2 = int(number2.replace(' ',''))

    if 0<=number1<10000 and 0<=number2<10000:
        ResultOfGCD=GCD(number1, number2)
        LCM(number1, number2,ResultOfGCD)
        break
    
    else:
        number1 = int(input('input natural number'))
        number2 = int(input('input natural number'))
