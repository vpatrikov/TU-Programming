def whiteboard():
    try:
        a = int(input("a: "))
        b = int(input("b: "))
        c = a/b
        print(f"c=a/b={a}/{b}={c}")
    except ZeroDivisionError:
        print("Cannot divide by zero")
    except ValueError:
        print("Input entered should be int or float")
    finally:
        print ("Bye bye")

    try:
        grades = [6, 5, 3, 4, 2, 6, 5, 3, 4]
        studentNo = int(input('student No:'))
        print(f'Student {studentNo} achieved {grades[studentNo - 1]}')
    except IndexError as msg:
        # print(type(msg))
        # print(msg.__class__.__name__)
        print ("No such index")
    except ValueError:
        print ("Input should be int.")
    finally:
        print("Goodbye")

def file7_zad_3():
    try:
        from module import number
        print(number())
    except Exception as e:
        print(f"{e.__class__.__name__}: Invalid Number")
        print(str(e))
    finally:
        print("Goodbye!")
        
    
def modules_testing():
    # import random
    import module
    # from random import randint
    # grade = random.randint(2, 6)
    grade = module.randnum()
    print (grade)
    
def file8_zad2():
    from calculator import calculate
    operation = input("Enter operation (add, subtract, multiply, divide): ")
    try:
        x = int(input("Enter the first number: "))
        y = int(input("Enter the second number: "))
    except ValueError:
        print("Invalid input. Please enter valid integers.")
        return

    result = calculate(operation, x, y)
    print(f"Result: {result}")


file8_zad2()
        
