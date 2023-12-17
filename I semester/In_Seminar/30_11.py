def zad_1_2_3():
    class Person:
        def __init__(self, name, family, age, nationality):
            self.__name = name if name else "Unknown"
            self.__family = family if family else "Unknown"
            self.__age = age if age and age >= 0 else "Invalid Age"
            self.__nationality = nationality if nationality else "Unknown"

        def get_name(self):
            return self.__name

        def set_name(self, name):
            self.__name = name if name else "Unknown"

        def get_family(self):
            return self.__family

        def set_family(self, family):
            self.__family = family if family else "Unknown"

        def get_age(self):
            return self.__age

        def set_age(self, age):
            self.__age = age if age and age >= 0 else "Invalid Age"

        def get_nationality(self):
            return self.__nationality

        def set_nationality(self, nationality):
            self.__nationality = nationality if nationality else "Unknown"

        def __str__(self):
            return f"Name: {self.__name}, Surname: {self.__family}, Age: {self.__age}, Nationality: {self.__nationality}"

        def print_func(self):
            print(f"Name: {self.__name} {self.__family}, Nationality: {self.__nationality}")


    class Student(Person):
        def __init__(self, name, family, age, nationality, university, year_of_study):
            super().__init__(name, family, age, nationality)
            self.__university = university if university else "Unknown"
            self.__year_of_study = year_of_study if year_of_study and year_of_study >= 0 else "Unknown"

        def get_university(self):
            return self.__university

        def set_university(self, university):
            self.__university = university if university else "Unknown"

        def get_year_of_study(self):
            return self.__year_of_study

        def set_year_of_study(self, year_of_study):
            self.__year_of_study = year_of_study if year_of_study and year_of_study >= 0 else "Unknown"

        def __str__(self):
            return f"{super().__str__()}, University: {self.__university}, Year of Study: {self.__year_of_study}"

        def print_func(self):
            print(f"{super().print_func()}, University: {self.__university}, Year of Study: {self.__year_of_study}")


    class Lecturer(Person):
        def __init__(self, name, family, age, nationality, university, teaching_experience):
            super().__init__(name, family, age, nationality)
            self.__university = university if university else "Unknown"
            self.__teaching_experience = (
                teaching_experience if teaching_experience and teaching_experience >= 0 else "Unknown"
            )

        def get_university(self):
            return self.__university

        def set_university(self, university):
            self.__university = university if university else "Unknown"

        def get_teaching_experience(self):
            return self.__teaching_experience

        def set_teaching_experience(self, teaching_experience):
            self.__teaching_experience = (
                teaching_experience if teaching_experience and teaching_experience >= 0 else "Unknown"
            )

        def __str__(self):
            return f"{super().__str__()}, University: {self.__university}, Teaching Experience: {self.__teaching_experience} years"

        def print_func(self):
            print(
                f"{super().print_func()}, University: {self.__university}, Teaching Experience: {self.__teaching_experience} years"
            )

    def find_oldest(people):
        oldest_person = max(people, key=lambda x: x.get_age())
        print(f"{oldest_person.get_age()}")

    def print_below_18(people):
        print("People with ages lower than 18:")
        for person in people:
            if person.get_age() < 18:
                print(person.get_name(), person.get_family())

    def count_above_18(people):
        count = sum(1 for person in people if person.get_age() > 18)
        print(f"There are {count} people with age higher than 18.")

    peopleList = []
    person_instance = Person("Pesho", "Gosho", 24, "BG")
    print(person_instance)
    peopleList.append(person_instance)

    student_instance = Student("John", "Smith", 17, "British", "Blackburn University", 1)
    print(student_instance)
    peopleList.append(student_instance)

    lecturer_instance = Lecturer("Ivan", "Petrov", 45, "Bulgarian", "TU-Sofia", 15)
    print(lecturer_instance)
    peopleList.append(lecturer_instance)

    while True:
        print("\nMenu:")
        print("1. Find the oldest")
        print("2. Print the names of people with ages lower than 18")
        print("3. Check how many people have age higher than 18")
        print("4. Exit")

        choice = input("Enter your choice (1-4): ")

        if choice == "1":
            find_oldest(peopleList)
        elif choice == "2":
            print_below_18(peopleList)
        elif choice == "3":
            count_above_18(peopleList)
        elif choice == "4":
            print("Exiting the program. Goodbye!")
            break
        else:
            print("Invalid choice. Please enter a number between 1 and 4.")

def zad_2_whiteboard ():
    import random
    class Student():
        def __init__(self, num, name, grade):
            self.num = num
            self.name = name
            self.grade = grade

        def __str__ (self):
            return f"№: {self.num}; Name: {self.name}; Grade: {self.grade};"

    student_1 = Student(5, "George", round(random.uniform(2,6), 2))
    student_2 = Student(16, "Ivan", round(random.uniform(2,6), 2))
    student_3 = Student(8, "Eva", round(random.uniform(2,6), 2))
    student_4 = Student(18, "Kaloyan", round(random.uniform(2,6), 2))
    student_5 = Student(13, "Irina", round(random.uniform(2,6), 2))
    student_6 = Student(11, "Zdravko", round(random.uniform(2,6), 2))
    student_7 = Student(7, "Maryan", round(random.uniform(2,6), 2))
    student_8 = Student(10, "Ivelin", round(random.uniform(2,6), 2))
    student_9 = Student(20, "Stanslav", round(random.uniform(2,6), 2))
    student_10 = Student(14, "Emilly", round(random.uniform(2,6), 2))


    print(student_1)

zad_1_2_3 ()