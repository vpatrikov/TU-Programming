# ! For getting input from the user
# first_attendance = [str(x) for x in input("Enter students attending first week: ").split(' ')]
# second_attendance = [str(x) for x in input("Enter students attending second week: ").split(' ')]
# third_attendance = [str(x) for x in input("Enter students attending third week: ").split(' ')]
# all_in_group = {str(x) for x in input("Enter students enrolled: ").split(' ')}

students_enrolled = {"Anna", "Alex", "Bilyana", "Evgeni", "Darina", "Kamen", "Katq", "Miroslav", "Petya", "Radka", "Stoyan", "Cveta"}
first_attendance = {"Alex", "Evgeni", "Cveta", "Petya", "Darina"}
second_attendance = {"Radka", "Miroslav", "Alex", "Anna", "Cveta", "Darina", "Bilyana"}
third_attendance = {"Stoyan", "Radka", "Evgeni", "Darina", "Anna", "Kamen", "Petya", "Cveta"}


def zad_3():
    print("\nWent to all three courses: ")
    for x in students_enrolled:
        if(x in first_attendance and x in second_attendance and x in third_attendance):
            print(f"{x}")

    print("\nWent to the first and didn't attend the second: ")
    for x in students_enrolled:
        if(x in first_attendance and x not in second_attendance):
            print (f"{x}")
    
    print("\nStudents that have attended at least once: ")
    for x in students_enrolled:
        if (x in first_attendance or x in second_attendance or x in third_attendance):
            print (f"{x}")

    print("\nStudents that haven't attended at all: ")
    for x in students_enrolled:
        if (x not in first_attendance and x not in second_attendance and x not in third_attendance):
            print(f"{x}")

def zad_4():
    dictionaryAttend = {}

    for x in students_enrolled:
        dictionaryAttend[x] = 0

        if (x in first_attendance):
            dictionaryAttend[x] += 1
        if (x in second_attendance):
            dictionaryAttend[x] += 1
        if (x in third_attendance):
            dictionaryAttend[x] += 1

    for key, value in dictionaryAttend.items():
        print(f"{key} - {value}")
    
zad_3()
zad_4()