from random import randint
from math import prod

def get_size(low, high, prompt):
    while True:
        try:
            n = int(input(prompt))
            if low < n < high:
                return n
        except ValueError:
            print("Please enter an integer")

n = get_size(20, 30, "Enter n: ")

my_list = [randint(-100, 100) for x in range(n)]

print(f"Original list with random numbers:\n{my_list}")

odd_list = my_list[1::2]
print(f"Elements with odd indexes: {odd_list}")
print(f"The sum of elements with odd indexes: {sum(odd_list)}")

count = 0
negative_divisible_two = []

for number in my_list:
    if (number % 10) % 2 == 0:
        count += 1
    if number < 0 and number % 2 == 0:
        negative_divisible_two.append(number)
    
negative_divisible_two.reverse()

print(f"The count of numbers with ones divisible by two {count}")
print(f"Negative numbers divisible list sorted in descending order: {negative_divisible_two}")
print(f"Product of negative numbers divisible by two: {prod(negative_divisible_two)}")

list_2 = [x for x in my_list if x > n]

dif = max(list_2) - min(list_2)

print(f"Elements of the secound list:\n{list_2}")
print(f"The difference between the minimum and the maximum of second list: {dif}")

list_2_odd = [x for x in list_2 if x % 2 != 0]

print (f"Odd numers from list_2: {list_2_odd}")
print (f"Size of odd numbers list {len(list_2_odd)}")

list_2_odd.remove(min(list_2_odd))

print(f"list_2 with minimal value removed {list_2_odd}")



