def zad_7():
    numberList_1 = []
    for x in range(0, 50):
        if x % 3 == 0:
            numberList_1.append(x)
    
    for x in numberList_1:
        if x % 4 == 0:
            numberList_1.remove(x)

    numberList_2 = []

    for x in range (0, 50):
        if x % 5 == 0:
            numberList_2.append(x)

    counter =  0

    numberList_3 = numberList_1.copy()
   
    for number in numberList_2:
        numberList_3.insert(counter, number)
        counter += 2

    print (f"List 1 (num % 3 == 0): {numberList_1}")
    print (f"List 2 (num % 5 == 0): {numberList_2}")
    print (f"List 3 (initial): {numberList_3}")

    numberList_3.sort()

    print (f"List 3 (sorted): {numberList_3}")

    numberList_3 = list(set(numberList_3))

    print(f"List 3 (final): {numberList_3}")
    


def zad_8():
    a = '2222'
    b = '0123'
    s = ''

    value = 0
    for i in range(0, len(a)):
        value += int(a[i]) ** int(b[i])
        if i == 0:
            s += f"{a[i]}**"
        elif i == len(a) - 1:
            s += f"{b[i]}"
        else:
            s += f"{a[i]}+{b[i]}**"

    print(f"{s} = {value}")

def zad_9 ():
    a = [x for x in range(0, 11)]

    a.insert(5, a[5])

    print(f"\nThe value of element 6: {a[6]}")

    b = a[::2]
    print(f"List b: {b}")

    print(f"\nSum of b elements: {sum(b)}")

    a1 = [x**2 for x in b]

    print(f"Sum of a1 elements: {sum(a1)}")

    d1 = a[0:6:1]
    d2 = a[:5:-1]

    print(f"\nd1: {d1}")
    print(f"d2: {d2}")

    d = d1 + d2

    print(f"\nd{d}")


def zad_10():
    numList = [x for x in range(0, 6)]

    print(numList)

    for x in range(len(numList)-1, 0, -1):
        numList.insert(x, (numList[x]+numList[x-1])/2)

    print(numList)

    temp = numList[0]
    numList[0] = numList[len(numList) - 1]
    numList[len(numList) - 1] = temp

    print(numList)

    numList.append(numList.pop(numList.index(2.5)))

    print (numList)

    numList.pop(8)

    print (numList)

zad_10()