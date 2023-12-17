class Student:
    def __init__(self, number, grade, name):
        self.number = number
        self.grade = grade
        self.name = name



student_1 = Student(19, 5, "Ivan")
student_2 = Student(13, 4.50, "George")
student_3 = Student(7, 4.67, "Denis")
student_4 = Student(5, 3.50, "Vladimir")

students = []

students.append(student_1)
students.append(student_2)
students.append(student_3)
students.append(student_4)

file1 = open("./I semester/In_Lab_PB/14_12/students.txt", "wt")
for student in students:
    file1.write(f"{student.name}, {student.grade}, {student.number}\n")


file1.close()
file2 = open("./I semester/In_Lab_PB/14_12/students.txt", "rt")
print(file2.read())
file2.close()

students2 = []
file3 = open("./I semester/In_Lab_PB/14_12/students.txt", "rt")

lines = file3.readlines()

for line in lines:
    line = line.replace("\n", "")
    student_fields = line.split(",")
    students2.append(Student(student_fields[2], float(student_fields[1]), student_fields[0]))

file3.close()

# print(students2)

for student in students2:
    print(f"Name: {student.name}, Grade: {student.grade}, Number: {student.number}")
