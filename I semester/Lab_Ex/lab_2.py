def trapezoid_area():
    while True:
        a = input("\nEnter a: ")
        if a.isdigit():
            a = float(a)
            break
        else:
            print("Enter a valid number for a")

    while True:
        b = input("\nEnter b: ")
        if b.isdigit():
            b = float(b)
            break
        else:
            print("Enter a valid number for b")

    while True:
        h = input("\nEnter h: ")
        if h.isdigit():
            h = float(h)
            break
        else:
            print("Enter a valid number for h")

    s = (a+b) * h/2

    print("\nS =", round(s, 2))

def s_and_p_circle():
    r = float(input("Enter r: "))
    pi = 3.14
    
    s = round(pi*r**2, 3)
    c = round(2*pi*r, 3)

    print (f"S = {s};   P = {c}")

def stay_price_calc():
    while True:
        hours = input("\nEnter Hours: ")

        if hours.isdigit():
            hours = int(hours)
            break
        else:
            print("Invalid Input!")
    while True:
        enter_rate = input("\nEnter Rate: ")

        if enter_rate.isdigit():
            enter_rate = float(enter_rate)
            break
        else:
            print("Invalid Input!")
    print (f"{round(hours * enter_rate, 2)}")

