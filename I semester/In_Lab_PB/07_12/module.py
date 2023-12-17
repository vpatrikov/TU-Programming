def randnum():
    from random import randint
    return randint(2,6)

def squareroot(a):
    return round(a**0.5, 2)


def number():
    a = int(input("Enter a number: "))
    if a > 0:
        return squareroot(a)
    else:
        raise Exception("Invalid Number")