def zad_1_2():
    from math import sqrt, cos, degrees, acos, floor
    class Vector:
        def __init__(self, name, x, y, z):
            self.name = name
            self.x = x
            self.y = y
            self.z = z
        def norm (self):
            return sqrt(self.x**2+self.y**2+self.z**2)

    class Scalar(Vector):
        def __init__(self, name, x, y, z):
            super().__init__(name, x, y, z)

        def scalarproduct(vectorA , vectorB):
            c = (vectorA.x * vectorB.x) + (vectorA.y * vectorB.y) + (vectorA.z * vectorB.z)
            return c
        
        def cosalpha(c, a, b):
            cosalpha = c/(a*b)
            return cosalpha
        
        def proverka(a, b, cosalpha):
            print(f"Proverka: {abs(a)*abs(b)*cosalpha}")


    vectorA = Scalar("A", 3, 4, 5)
    vectorB = Scalar("B", 1, 0, 2)

    A = vectorA.norm()
    B = vectorB.norm()

    print(f"vectorA: {round(A, 2)}\nvectorB: {round(B, 2)}")
    C = Scalar.scalarproduct(vectorA, vectorB)
    print(f"skalarno proizvedenie = {round(C)}")

    cosa = Scalar.cosalpha(C, A, B)

    print(f"cosa = {round(cosa, 3)}")

    cosa_degrees = degrees(acos(cosa))
    print(f"alpha = {floor(cosa_degrees)}")

    proverka = Scalar.proverka(cosa, A, B)

def zad_4():
    def find_roots(a, b, c):
        try:
            D = b**2 - 4*a*c
            if D > 0:
                x1 = (-b + D**0.5) / (2*a)
                x2 = (-b - D**0.5) / (2*a)
                return (round(x1, 2), round(x2, 2))
            elif D == 0:
                x = -b / (2*a)
                return (x)
            else:
                raise ValueError('Negative discriminant')
        except ZeroDivisionError:
            if a == 0:
                return (-c / b)
        except ValueError as e:
            return find_roots(1, 2, 1)
        except TypeError:
            try:
                return find_roots(2, 1, 1)
            except TypeError:
                pass


    print(find_roots(1, 2, 1)) 
    print(find_roots(1, 4, 1))
    print(find_roots(1, 1, 1))
    print(find_roots(0, 2, 1))


def zad_9():
    class NumericalList:
        def __init__(self, input_list):
            self.numeric_list = [element for element in input_list if isinstance(element, (int, float))]

        def show(self):
            return self.numeric_list

        def average(self):
            return sum(self.numeric_list) / len(self.numeric_list) if self.numeric_list else 0

    input_list = [1, 'a', 2, 'b', 3.5, None, 4]
    num_list = NumericalList(input_list)
    print(num_list.show())
    print(num_list.average())

zad_9()