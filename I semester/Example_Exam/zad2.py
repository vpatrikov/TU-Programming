class Worker:
    def __init__(self, worker_num, fname, lname, work_experience_company, salary, age):
        self.worker_num = worker_num
        self.fname = fname
        self.lname = lname
        self.work_experience_company = work_experience_company
        self.salary = salary
        self.age = age

    def worker_information(self):
        info = f"Worker Number: {self.worker_num}\n"
        info += f"Name: {self.fname} {self.lname}\n"
        info += f"Experience: {self.work_experience_company} years\n"
        info += f"Salary: {self.salary}\n"
        info += f"Age: {self.age}"
        return info

    def salary_bonus(self):
        if 5 <= self.work_experience_company < 10:
            return self.salary * 1.015
        elif self.work_experience_company >= 10:
            return self.salary * 1.02
        else:
            return self.salary * 1.005

def search_by_num(workers_list, worker_num):
    return any(worker.worker_num == worker_num for worker in workers_list)

def add_worker_ui(workers_list):
    worker_num = int(input("Enter worker's number: "))
    fname = input("Enter worker's first name: ")
    lname = input("Enter worker's last name: ")
    work_experience_company = int(input("Enter worker's experience in years: "))
    salary = float(input("Enter worker's salary: "))
    age = int(input("Enter worker's age: "))
    
    worker = Worker(worker_num, fname, lname, work_experience_company, salary, age)
    workers_list.append(worker)
    print("Worker added successfully.")

def search_by_num_ui(workers_list):
    worker_num = int(input("Enter worker's number to search: "))
    if search_by_num(workers_list, worker_num):
        print("Worker found.")
    else:
        print("Worker not found.")

def remove_worker(workers_list, worker_num):
    for i, worker in enumerate(workers_list):
        if worker.worker_num == worker_num:
            del workers_list[i]
            print("Information deleted !!!")
            return
    print("Wrong worker_num!!!")

def remove_worker_ui(workers_list):
    worker_num = int(input("Enter worker's number to remove: "))
    remove_worker(workers_list, worker_num)

def main_ui():
    workers_list = []
    while True:
        print("\nOptions:")
        print("1. Add worker")
        print("2. Search by worker number")
        print("3. Remove worker")
        print("4. Exit")
        choice = input("Enter your choice: ")
        
        if choice == '1':
            add_worker_ui(workers_list)
        elif choice == '2':
            search_by_num_ui(workers_list)
        elif choice == '3':
            remove_worker_ui(workers_list)
        elif choice == '4':
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Please try again.")

main_ui()