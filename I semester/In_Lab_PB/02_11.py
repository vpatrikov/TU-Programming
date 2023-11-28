import statistics
import math

def printing ():
    grades = [6, 5, 3, 4, 2, 6]
    tuple = (6, 5, 3, 4, 2, 6)
    set2 = {6, 5, 3, 4, 2, 6}
    dict2 = {1:6, 2:5, 3:3, 4:4, 5:2, 6:6, 3:5}

    print ("grades ", grades)
    print ("tuple ", tuple)
    print ("set2 ", set2)
    print ("dict2 ", dict2)

    print("\ngrades #3 before change: ", grades[3])
    grades[3] = 6
    print("grades #3 after change: ", grades[3])

    print("\nLargest element from grades ", max(grades))
    print("Smallest element from grades ", min(grades))

    print("\ngrades sum ", sum(grades))
    print("Length of grades ", len(grades))


    print("\nBefore sort: ", grades)
    grades.sort()
    print("After sort: ", grades)

    print("\nThe average of grades elements: ", round(statistics.mean(grades), 2))
    print("The product of grades elements", math.prod(grades))

    grades.append(6)
    print("\ngrades append 6 ", grades)

    grades.insert(0, 6)
    print ("grades insert 6 ", grades)

    grades.remove(6)
    print ("grades remove last 6 ", grades)


    grades.pop(0)
    print ("grades pop element 0 ", grades)
    
    answer = input ("\nfor or foreach\n")

    if answer == "foreach":
        for grade in grades:
            grade += 1
            print(grade)
    else:
        for i in range(len(grades)):
            grades[i] += 1
            print(grade)
    
    print(grades)


def shop():
    products = ["banana", "apple", "bread", "steak"]
    prices = [1.10, 0.90, 1.50, 12]
    sells = [50, 319.50, 13.59, 15]
    cart = []

    while True:
        answer = input("\n\n\n\n\n\n\nWhat do you want to do?\n\nadd product (add)\nprint products (print)\nmax price (max)\nmin price (min)\nprint in price range (price range)\nprint quantity (quantity)\nbuy product (buy)\nview cart (cart)\nprint how much profit will be from product (profit)\nexit\n\n")

        if answer == "add":
            product_name = input("Enter the name of the product: ")
            product_price = float(input("Enter the price of the product: "))
            product_sell_price = float(input("For how much will you sell the product: "))

            products.append(product_name)
            prices.append(product_price)
            sells.append(product_sell_price)

        elif answer == "print":
            for i in range(len(products)):
                print((i + 1), "Product:", products[i], prices[i])

        elif answer == "max":
            print("The max price is", max(prices))

        elif answer == "min":
            print("The min price is", min(prices))

        elif answer == "price range":
            n = int(input("Enter start for pricerange: "))
            m = int(input("Enter end for price range: "))
            print()
            for i in range(n, m):
                if 0 <= i < len(products):
                    print((i + 1), "Product: ", products[i], prices[i])
                else:
                    print("Index out of range.")
        elif answer == "quantity":
            print("There are", len(products), "products")

        elif answer == "buy":
            print("What product do you want to buy?\n")
            print("Menu")

            for i in range(len(products)):
                print((i + 1), "Product:", products[i], prices[i])

            buy = int(input())
            buy -= 1

            if 0 <= buy < len(products):
                cart.append((products[buy], prices[buy], sells[buy]))
                products.pop(buy)
                prices.pop(buy)
                sells.pop(buy)
            else:
                print("Invalid index. Product not found.")

        elif answer == "cart":
            print("Your shopping cart:")
            for i, (product_name, product_price, product_sell_price) in enumerate(cart):
                print(f"{i + 1}. Product: {product_name}, Price: {product_price}")

        elif answer == "profit":
            for i in range(len(prices)):
                print("Profit from", (i + 1), "product:", (sells[i] - prices[i]))

        elif answer == "exit":
            break
        else:
            print("Invalid Input")


shop()
