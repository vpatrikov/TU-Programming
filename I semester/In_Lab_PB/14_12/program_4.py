import pickle

class Student:
    def __init__(self, number, name, grade, age):
        self.name = name
        self.age = age
        self.number = number
        self.grade = grade

    def __str__(self):
        return f"{self.number}, {self.name}, {self.grade}, {self.age}"

    def __repr__(self):
        return f"{self.number}, {self.name}, {self.grade}, {self.age}"

students = [Student(10, "Pesho", 6, 15), Student(11, "Georgi", 3, 17), Student(51, "Sasho", 2.12, 18)]
binary = pickle.dumps(students)
print(binary)

with open("./I semester/In_Lab_PB/14_12/students.bin", "wb") as file:
    file.write(binary)

with open("./I semester/In_Lab_PB/14_12/students.bin", "rb") as file1:
    students = pickle.load(file1)
    # print(type(students))

for student in students:
    # print(type(student))
    print(student)
