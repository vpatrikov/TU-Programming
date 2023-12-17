import os

class Student:
    def __init__(self, number, grade, name):
        self.number = number
        self.grade = grade
        self.name = name

    def __str__(self):
        return f"{self.name}, {self.grade}, {self.number}"

def read_students_from_file(filename):
    students = []
    if os.path.exists(filename):
        with open(filename, 'r') as file:
            for line in file:
                name, grade, number = line.strip().split(", ")
                students.append(Student(int(number), float(grade), name))
    return students

def write_students_to_file(filename, students):
    with open(filename, 'w') as file:
        for student in students:
            file.write(str(student) + "\n")

def add_student(students):
    name = input("Enter student's name: ")
    grade = float(input("Enter student's grade: "))
    number = int(input("Enter student's number: "))
    students.append(Student(number, grade, name))

def remove_student(students):
    number = int(input("Enter the number of the student to remove: "))
    students = [student for student in students if student.number != number]

def main():
    filename = "./I semester/In_Lab_PB/14_12/students.txt"
    students = read_students_from_file(filename)

    while True:
        print("\nMenu:")
        print("1. Read list of students from file")
        print("2. Write list of students to file")
        print("3. Add a student")
        print("4. Remove a student")
        print("5. Exit and save changes")
        choice = input("Enter your choice: ")

        if choice == '1':
            for student in students:
                print(student)
        elif choice == '2':
            write_students_to_file(filename, students)
            print("Students written to file.")
        elif choice == '3':
            add_student(students)
        elif choice == '4':
            students = remove_student(students)
        elif choice == '5':
            write_students_to_file(filename, students)
            print("Changes saved. Exiting.")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()
