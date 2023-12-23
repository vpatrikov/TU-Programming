import random

def my_input_size(prompt, high, low):
    while True:
        n = input(prompt)

        if n.isdigit() and low < int(n) < high:
            return int(n)
        else:
            print("Invalid Size") 

size = my_input_size("Enter size of list: ", 35, 15)
mylist = [random.randint(30, 300) for x in range(size)]

list3 = [x for x in mylist if 10 <= x <= 99 and (x % 2 == 0 or x % 3 == 0)]
print(f"Two-digit numbers divisible by 2 or 3: {len(list3)}")

only_odd = list3[1::2]

if only_odd:
    only_odd_sum = sum(only_odd)
    print(f"Sum of only odd indexed elements in list3 {only_odd_sum}")

    min_even = min(x for x in only_odd if x % 2 == 0)
    print(f"Minimum even number in only odd numbers list: {min_even}")
else:
    print("The list of odd-indexed elements is empty.")
