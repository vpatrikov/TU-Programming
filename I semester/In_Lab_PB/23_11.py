def apples():
    class Apple:
        def __init__ (self, kind):
            self.kind = kind
            self.color = 'green'
            self.taste = 'bitter'
        def getReadyToBeEaten(self):
            if self.kind == 'golden':
                self.color = 'yellow'
                self.taste = 'sweet'
            elif self.kind == 'forest':
                self.taste = 'sour'
                self.color = 'green'
            elif self.kind == 'evil':
                self.color = 'purple'
                self.taste = 'bitter'

        def __str__(self):
            return f"{self.kind} is {self.color} and {self.taste}"

    apple1 = Apple('golden')
    apple2 = Apple('forest')
    apple3 = Apple('evil')

    print("Apple1: ", apple1)
    print("Apple1: ", apple1)
    print("Apple3: ", apple3)

    print(f"\n{apple1.kind} is {apple1.color} and {apple1.taste}")
    print(f"{apple2.kind} is {apple2.color} and {apple2.taste}")
    print(f"{apple3.kind} is {apple3.color} and {apple3.taste}")

    apple1.getReadyToBeEaten()
    apple2.getReadyToBeEaten()
    apple3.getReadyToBeEaten()

    print(f"\n{apple1.kind} is {apple1.color} and {apple1.taste}")
    print(f"{apple2.kind} is {apple2.color} and {apple2.taste}")
    print(f"{apple3.kind} is {apple3.color} and {apple3.taste}")


def animal():
    class Animal:
        def getAge(self):
            return self.__age

        def setAge(self, age):
            if age > self.__age:
                self.__age = age

        def __init__(self, age, kind):
            self.__age = 0
            self.setAge(age)
            self.kind = kind

        def talk(self):
            return "I can't talk"

        def move(self):
            return "I can't walk"

        def __str__(self):
            return f"I am {self.kind}\n{self.talk()}\n{self.move()}\nI'm {self.__age} years old."

    class Cat(Animal):
        def __init__(self, age, kind):
            super().__init__(age, kind)

        def talk(self):
            return "Miau-Miau"

        def move(self):
            return "I can walk"

    class Carp(Animal):
        def __init__(self, age, kind):
            super().__init__(age, kind)

        def move(self):
            return "I can't walk but I can swim"

    class GoldenFish(Animal):
        def __init__(self, age, kind):
            super().__init__(age, kind)

        def talk(self):
            return "Let me go and I will grant you a wish"

        def move(self):
            return "I can't walk but I can swim"

    class Raven(Animal):
        def __init__(self, age, kind):
            super().__init__(age, kind)

        def talk(self):
            return "Kaw-Kaw"

        def move(self):
            return "I can't walk but I can fly"

    class Duck(Animal):
        def __init__(self, age, kind):
            super().__init__(age, kind)

        def talk(self):
            return "Quack-quack"

        def move(self):
            return "I can walk and I can fly"

    class Dog(Animal):
        def __init__(self, age, kind):
            super().__init__(age, kind)

        def talk(self):
            return "Bau-Bau"

        def move(self):
            return "I can walk"

    cat = Cat(3, "British Cat")
    print(cat)
    # cat.setAge(4)
    cat.setAge(cat.getAge() + 1)
    print(f"After my birthday I am {cat.getAge()} years old.\n")

    carp = Carp(1, "Common Carp")
    print(carp)
    print()

    goldie = GoldenFish(10, "Goldie")
    print(goldie)
    print()

    raven = Raven(8, "Little Raven")
    print(raven)
    print()

    duck = Duck(4, "Mallard")
    print(duck)
    print()


    dog = Dog(10, "Golden Retriever")
    print(dog)
    print()
    



animal()