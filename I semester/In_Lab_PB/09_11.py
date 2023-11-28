def zad_1 ():
    while True:
        number = input("\nEnter a number: ")

        if number.isdigit():
            correctTuple = tuple([int(x) for x in number])
            reversedTuple = tuple(reversed(list(correctTuple)))

            print("\nCorrect order", correctTuple)
            print("Reversed order", reversedTuple)
            break
        else:
            print("\nEnter a valid number")

def zad_2():
    import random
    while True:
        size = input("How big do you want your list to be? ")
        randlist = []

        if size.isdigit(): 
            size = int(size)
            for i in range(size):
                randlist.append(random.randint(0, 100))
            
            print("\nList before adding sum of elements:", randlist)
            
            sumlist = [randlist[i] + randlist[i + 1] for i in range(len(randlist) - 1)]
            
            result_list = []
            for i in range(len(randlist) - 1):
                result_list.append(randlist[i])
                result_list.append(sumlist[i])
            
            result_list.append(randlist[-1])
            
            print("\nList after adding sum of elements:", result_list)
            break
        else:
            print("\nEnter a valid number")


def zad_3():
    a = input("Enter text: ")
    dictionary = {}

    for char in a:
        if char in dictionary:
            dictionary[char] += 1
        else:
            dictionary[char] = 1

    print(dictionary)

def zad_4():
    while True:
        number = input("\nEnter a number: ")

        if number.isdigit():
            numberList = [x for x in range (1, (int(number)) + 1)]
            dictionary = {}


            for i in range((len(numberList))):
                dictionary[numberList[i]] = numberList[-(i + 1)]

            print(dictionary)
            break
        else:
            print("\nEnter a valid number")

def test():
    s1 = 'text'
    s2 = 'text'
    s3 = 'text_1'
    print(id(s1))
    print(id(s2))
    print(id(s3))
    print(s1 is s2)
    print(s1 is s3)


test()