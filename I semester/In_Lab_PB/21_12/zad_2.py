class Car:
    def __init__(self, car_brand, car_model, car_price, manufacture_date):
        self.car_brand = car_brand
        self.car_model = car_model
        self.car_price = car_price
        self.manufacture_date = manufacture_date

    def display_info(self):
        print(f'Brand: {self.car_brand}, Model: {self.car_model}, Price: {self.car_price}, Manufacture Year: {self.manufacture_date}')

    def __repr__(self):
        return f'{self.car_brand} {self.car_model}'

cars = [
    Car('Toyota', 'Corolla', 20000, 2020),
    Car('Honda', 'Civic', 22000, 2022),
    Car('Ford', 'Mustang', 30000, 2022),
    Car('Chevrolet', 'Camaro', 35000, 2021),
    Car('BMW', '3 Series', 40000, 2022),
    Car('Audi', 'A4', 45000, 2020),
    Car('Mercedes', 'C-Class', 50000, 2022)
]

def sort_price(cars):
    sorted_cars = sorted(cars, key=lambda car: car.car_price, reverse=True)
    for car in sorted_cars:
        car.display_info()

def list_by_brand(cars, brand):
    for car in cars:
        if car.car_brand.lower() == brand.lower():
            car.display_info()

def search_color(cars, color):
    color_cars = [car for car in cars if car.color.lower() == color.lower()]
    if color_cars:
        return max(color_cars, key=lambda car: car.car_price)
    else:
        return None

def newest_car(cars):
    return [car for car in cars if car.manufacture_date == 2022]

sort_price(cars)
print('---')
list_by_brand(cars, 'BMW')
print('---')
newest_cars_list = newest_car(cars)
for car in newest_cars_list:
    car.display_info()
