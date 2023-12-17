class Student:
    def __init__(self, number, grade, name):
        self.number = number
        self.grade = grade
        self.name = name

file = open("./I semester/In_Lab_PB/14_12/students.txt", "a")

# student_1 = Student(1, 2, "Sasho")
student_1 = Student(20, 6, "Pesho")

file.write(f"{student_1.name}, {student_1.grade}, {student_1.number}\n")

file.close()

