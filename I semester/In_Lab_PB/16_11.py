def testing():
    def greet ():
        print(f'Hello!')

    # greet()

    def greetPerson(name):
        print(f'Hello, {name}')

    # name = input('Enter your name: ')
    # greetPerson(name)

    def add(num1, num2):
        res = num1 + num2
        return res

    number1 = int(input("num 1:"))
    number2 = int(input("num 2:"))
    result = add(number1, number2)

    # print(result)
    print(f'{number1} + {number2} = {result}')

    expression = 2 * result
    print(expression)


    # def sumNumbers (numbers):
    #     sum = 0
    #     for number in numbers:
    #         sum += number

    #     return sum

    # grades = [6, 5, 3, 4, 6]

    # print(f'sum: {sumNumbers(grades)}')


    def dblNumbers (numbers):
        for i in range(len(numbers)):
            numbers[i] *= 2
        # return numbers

    prices = [19.99, 5.50, 150]

    print(prices)

def zad_1():
    def squareArea (a):
        return a*a
    def rectangleArea (a, b):
        return a*b
    def triangleArea (a, b):
        return (a+b)/2

    print("The area of what figure do you want to calculate\n\n1. Square\n2. Rectangle\n3. 90 degreeTriangle")
    answer = int(input())

    if answer == 1:
        a = int(input("Enter a:"))
        print(f"\nThe area of the square is {squareArea(a)}")
    else:
        a = int(input("Enter a:"))
        b = int(input("Enter b:"))
        if answer == 2:
            print(f"\nThe area of the rectangle is {rectangleArea(a, b)}")
        if answer == 3:
            print(f"\nThe area of the triangle is {triangleArea(a, b)}")


def zad_2():
    number  = input("Enter a number: ")
    revNumber = ''.join(list(reversed(number)))
    if number == revNumber:
        return 1
    else:
        return 0


def zad_3():
    def addition(a, b):
        return a + b
    def subtraction (a, b):
        return a - b
    def multiplication (a, b):
        return a * b
    def division (a, b):
        return round((a * b), 2)

    answer = input("What do you want to do?\n\nAddition (+)\nSubtraction (-)\nMultiplication (*)\nDivision(/)\n")

    a = int(input("Enter a: "))
    b = int(input("Enter b: "))

    if answer == "+":
        print(addition(a, b))
    elif answer == "-":
        print(subtraction(a, b))
    elif answer == "*":
        print(multiplication(a, b))
    elif answer == "/":
        print(division(a, b))

        
def zad_4():
    def list_filter(numbersList, number=5):
        for i in range(len(numbersList)):
            numbersList[i] = int(numbersList[i])
            if numbersList[i] > number:
                numbersList[i] = 0
        return numbersList

    numsList = (input("Enter elements of list: ")).split(' ')
    num = int(input("Enter number you want to filter by: "))
    print(f"\n\nFiltered list {list_filter(numsList, num)}")


# def sumNums(*nums):
#     global addition
#     addition = 0
#     for num in nums:
#         addition += num

# sumNums(1, 2, 3, 4)

# print(addition)


def zad_3_lambda():
    addition = lambda a, b: a + b
    subtraction = lambda a, b: a - b
    multiplication = lambda a, b: a * b
    division = lambda a, b: round((a / b), 2)

    answer = input("What do you want to do?\n\nAddition (+)\nSubtraction (-)\nMultiplication (*)\nDivision(/)\n")

    a = int(input("Enter a: "))
    b = int(input("Enter b: "))

    if answer == "+":
        print(addition(a, b))
    elif answer == "-":
        print(subtraction(a, b))
    elif answer == "*":
        print(multiplication(a, b))
    elif answer == "/":
        print(division(a, b))