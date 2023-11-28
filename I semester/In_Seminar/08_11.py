def zad_1():
    a = int(input("Enter a: "))
    b = int(input("Enter b: "))
    s = 0
    counter = a

    # ! with for 
    for i in range(a, b+1):
        s += i

    # ! with while
    # while (counter != b+1):
    #     s += counter
    #     counter += 1
            
    print(s)

def zad_2():
    a = int(input("Enter a:"))
    b = int(input("Enter b:"))
    s = 0

    for i in range (a, b+1):
        s += i

    print ("The sum of all the numbers between a and b is", s)

    while True:
        answer = input("\nDo you want to enter more numbers?")
        if(answer != "n"):
            a = int(input("Enter a:"))
            b = int(input("Enter b:"))
            for i in range (a, b+1):
                s += i
            print ("The sum of all the numbers between a and b including previous input(s) is", s)
        else:
            print("\nGoodbye!")
            break;


def zad_3():
    n = int(input("Enter a value for n: "))
    factorial = 1

    # ! with for
    for i in range (1, n + 1):
        factorial *= i

    # ! with while
    # counter = 1
    # while (counter != n + 1):
    #     factorial *= counter
    #     counter += 1

    print(f"{n}! = {factorial}")

def zad_4():
    x = int(input("Enter x: "))
    n = int(input("Enter n: "))
    s = 1
    counter = 1

    # ! with for
    # for i in range(1, n+1):
    #     s += x**i

    while (counter < n+1):
        s += x**counter
        counter += 1

    print(f"The sum of the numbers is {s}")


def zad_5():
    import math

    t = [41.0, 43.4, 48.8, 49.2, 50.1, 44.6, 47.3, 46.8, 43.9, 46.4]
    t_delta = []
    t_delta_squared = []
    t_average = round(sum(t)/len(t), 2)

    for i in t:
        t_delta.append(round(i - t_average, 2))
        t_delta_squared.append(round((i - t_average)**2, 2))

    sum_d_sq = round(sum(t_delta_squared), 2)

    average_square_error = round(math.sqrt(sum_d_sq/len(t) * (len(t) - 1)), 2)

    print("\nSredno kvadratichna greshka =", average_square_error)
    
    print(f"\nt = ({t_average} +- {average_square_error}); 68% possibility")

    standart_deviation = round(math.sqrt(sum_d_sq/(len(t)-1)), 2)

    print(f"\nsigma = {standart_deviation}")
    

def zad_6():
    import random
    gausList = []
    uniformList = []
    randList = []
    randList_2 = []

    for i in range(10):
        gausList.append(random.gauss(2.023, 0.014))
        uniformList.append(random.uniform(10, 16))
        randList.append(random.randint(10, 16))
        randList_2.append(random.random())

    print("\nGaussian Distribution")
    for i in gausList:
        print ("%.3f" % i, end = " ")
    
    print("\n\nUniform Distribution")
    for i in uniformList:
        print ("%d" % i, end = " ")

    print("\n\nrandInt")
    for i in randList:
        print ("%.2e" % i, end = " ")
    
    print("\n\nrandInt_2")
    for i in randList_2:
        print ("%.2f" % i, end = " ")

def zad_7():
    number = 166
    divisor = 10

    for _ in range(number):
        remainder = number % divisor
        if remainder != 0:
            print(remainder)
        number //= divisor
        if number == 0:
            break

zad_7()