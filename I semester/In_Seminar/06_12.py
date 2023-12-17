e0 = 8.85e-12

def zad_3(er = 1, q1 = 1, q2 = 1, r = 1 ):
    F = 1/(4*3.1415*e0*er)*q1*q2/r**2
    return F

print(zad_3())
print(round(zad_3(), -9))

print(round(zad_3(3), -9))
print(round(zad_3(3,3), -9))
print(round(zad_3(3,3, r=2), -7))
print(round(zad_3(r=2, q2=2), -7))

def zad_7():
    d = [3209, 3321, 2985, 3960, 4194, 3473, 2815, 2907, 3028, 3167, 3011, 4022]
    r = [1020, 1152, 1103, 984, 880, 678, 630, 505, 479, 513, 631, 952]

    ml = list(map(lambda x, y: x - y, d, r))
    print(ml)
    ten_perc_r = [(x*10/100) for x in r]
    print(ten_perc_r)
    new_r = list(map(lambda x, y: x + y, r, ten_perc_r))
    print(new_r)
    remaining_money = list(map(lambda x,y: x - y, d, new_r))
    print(remaining_money)
    print(sum(remaining_money[4:8]))
    
def zad_8():
    while True:
        width = input("Въведете широчина")
        if width.isnumeric():
            width = float(width)
            break
        else:
            print("Невалиден вход.")
    while True:
        length = input("Въведете дължина")
        if length.isnumeric():
            length = float(length)
            break
        else:
            print("Невалиден вход.")
    room_area = width * length

def zad_10(x1, y1, x2, y2):
    try:
        slope = round((y2-y1)/(x2-x1), 2)
        return slope
    except:
        raise ZeroDivisionError ("Unable to divide by zero.")
        

# print(zad_10(1,-2,1,5))