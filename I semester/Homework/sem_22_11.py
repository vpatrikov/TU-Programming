def zad_1 ():
    s = "'petur plet plete, prez tri pleta preplita'"
    print (f"\ninitial: {s}")
    
    s = s[1:-1].replace(",", "").capitalize()
    print (f"first change: {s}")

    words = s.split(' ')
    count = 0

    for i in range(len(words)):
        if "pl" in words[i]:
            count += 1
            words[i] = words[i].replace("pl", "PL")
    
    s = ' '.join(words).replace(" ", ";")

    print(f"\n'pl' is found {count} times")
    print (f"'pl's capitalized: {s}")

    s1 = list(''.join(x for x in s)) 

    

    for i in range(len(s1) - 1):
        if s1[i] == ";" and s1[i+1].capitalize() == "P":
            s1[i] = " "

    s1 = ''.join(x for x in s1)

    print (f"\nremoval of ';' in front of 'p' or 'P': {s1}")

    s1 = s1.replace(';', '')

    print(f"after removal of all ';' {s1}")

    if 'ъ' in s1:
        print ("\nThere is an 'ъ' in the string.")
    else:
        print("\nThere is no 'ъ' in the string.")
    if 'v' in s1:
        print ("There is an 'v' in the string.")
    else:
        print("There is no 'v' in the string.")

def zad_2():
    numbers = [12, 3, 456, 78]

    str1 = ''.join(map(str, numbers))
    
    str2 = f"{numbers[0]}.{numbers[1]}*{str(numbers[2])[0:1]}.{str(numbers[2])[1:]}/\
{str(numbers[3])[0:1]}.{str(numbers[3])[1:]}"
    
    str3 = '+'.join(map(str, numbers))

    print(f"\n{str1}\n{str2}\n{str3}\n")

    print(f"{eval(str1)}\n{round(eval(str2), 2)}\n{eval(str3)}")
    
def zad_5():
    import random

    # 1. Въвеждане на размера на кортежа
    while True:
        n = input("vavedete razmer na korteja: ")

        if n.isdigit():
            n = int(n)
            break
        else:
            print("\nnevaliden razmer\n")

    # 2. Генериране на кортеж със случайни букви
    letterTuple = tuple([random.choice('ABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(n)])
    print("\nkortejat sas slu4aini bukvi e:")
    print(letterTuple)

    # 3. Преброяване на повторенията на всяка буква в кортежа
    letterSet = set(letterTuple)
    countList = [letterTuple.count(letter) for letter in letterSet]

    # 4. Създаване на списък с кортежи
    tupleList = list(zip(list(letterSet), countList))
    print("spisak ot elementi na mnojestvoto e:")
    print(list(letterSet))
    print("mnojestvoto se sastoi ot {} elementa".format(len(letterSet)))
    print(countList)

    # 5. Създаване на речник
    letterDict = dict(tupleList)
    print("spisak ot korteji za vsiaka bukva ot mnojestvoto:")
    print(tupleList)
    print("rechnikat e:")
    print(letterDict)
    print("dict_keys({}):".format(list(letterDict.keys())))
    print("dict_values({}):".format(list(letterDict.values())))

def zad_6():
    import random
    letterDict = {'A': 10, 'B': 11, 'C': 12, 'D': 13, 'E': 14, 'F': 15}
    keysList = [x for x in letterDict.keys()]
    valuesList = [x for x in letterDict.values()]
    n = random.randint(10, 15)

    print(f"rechnika e {letterDict}")
    print(f"spisaka ot klu4ove e {keysList}")
    print(f"spisaka ot stoinosti e {valuesList}")
    print(f"generiranoto 4islo e {n}")
    print(f"posicia na 4isloto v spisaka {valuesList.index(n)}")
    
    for letter, number in letterDict.items():
        if number == n:
            print(f"klu4 {letter}")

    randNumbers = [random.randint(0, 15) for x in range(10)]
    
    print(randNumbers)

    for rnumber in randNumbers:
        found = False
        for letter, number in letterDict.items():
            if rnumber == number:
                print(f"bukva {letter}")
                found = True
                break
        if not found:
            print(f"chisloto {rnumber} ne e stoinost na rechnika")

zad_2()