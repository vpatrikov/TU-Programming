from math import sqrt

def s_and_p ():
    choice = int(input("\nWhich figure do you want to calculate? \n1. Square\n2. Rectangle\n3. Circle\n\n"))

    if choice == 1:
        a = float(input("\nEnter a: "))

        print (f"\nP = {round(4*a, 2)}\n")
        print (f"S = {round(a*a, 2)}")
    elif choice == 2:
        a = float(input("\nEnter a: "))
        b = float(input("Enter b: "))

        print(f"\nP = {round(2*(a+b), 2)}")
        print(f"S = {round(a*b, 2)}")
    elif choice == 3:
        r = float(input("\nEnter r: "))

        print(f"\nS = {round(3.14*r, 2)}")
    else:
        print ("\nInvalid Input")

def age():
    # ! while True solution 
    # while True:
    #     age = int(input("\nVuvedete na kolko ste godini: "))
    #     if age >= 18 and age < 120:
    #         print("Nazdrave")
    #         break
    #     elif age > 0 and age < 18:
    #         print("Maluk")
    #         break
    #     else:
    #         print("Nevaliden vhod\n")

    # ! do while like solution
    # age = input("Vuvedete godini: ")
    # while int(age) <= 0 or int(age) >= 120:
    #     age = input("Vuvedete godini: ")
    # if int(age) >= 18:
    #     print("Nazdrave")
    # else:
    #     print("Maluk")

    count = int(input("Kolko hora ste? "))

    for age in range(count):
        age = input("Vuvedete godini: ")
        while int(age) <= 0 or int(age) >= 120:
            age = input("Vuvedete godini: ")
        if int(age) >= 18:
            print("Nazdrave")
        else:
            print("Maluk")

def sum_n_numbers():
    sum = 0
    n = int(input("Enter n: "))

    for i in range(n):
        sum += i

    print (f"\n\n{sum}")


def product_n_to_m():
    n = int(input("Enter n: "))
    m = int(input("Enter m: "))
    product = 1

    for num in range(n, m + 1, 2):
        product *= num

    print(product)


def triangle():
    size = int(input("Enter the size of the triangle:\n\n"))
    for i in range(size):
        print((i+1)*'*')


def largest_num():
    # ! max() method solution

    # count = int(input("How many numbers do you want to enter "))
    # list = []

    # for i in range(count):
    #     a = int(input(f"Enter {i + 1} number: "))
    #     list.append(a)

    # print(max(list))
    
    count = int(input("How many numbers do you want to enter: "))
    numbers = []

    for i in range(count):
        num = int(input(f"Enter {i + 1} number: "))
        numbers.append(num)

    largest = numbers[0]

    for number in numbers:
        if number > largest:
            largest = number

    print("The largest number is:", largest)

def prime_number():
    while True:
        number = input("\nEnter a number: ")
        if number.isnumeric():
            number = int(number)
            if number <= 1:
                print(f"{number} is not a prime number")
            elif number == 2:
                print(f"{number} is a prime number")
            elif number % 2 == 0:
                print(f"{number} is not a prime number")
            else:
                is_prime = True
                for i in range(3, int(sqrt(number)) + 1, 2):
                    if number % i == 0:
                        is_prime = False
                        break
                if is_prime:
                    print(f"{number} is a prime number")
                    break
                else:
                    print(f"{number} is not a prime number")
        else:
            print("Invalid Input")
            
