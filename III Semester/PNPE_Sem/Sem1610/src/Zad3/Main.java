package Zad3;
import java.util.Scanner;
import java.util.ArrayList; // shte e po-lesno otkolkoto s normalen array ¯\_(ツ)_/¯

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Product> products = new ArrayList<Product>();

        System.out.println("Enter how many products you want to have: ");
        int size = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < size; i++) {
            Product temp = new Product();
            System.out.println("\nProduct #" + (i + 1) + ": \n");

            System.out.println("Enter name: ");
            temp.name = scanner.nextLine();

            System.out.println("Enter quantity: ");
            temp.quantity = scanner.nextInt();

            System.out.println("Enter price: ");
            temp.price = scanner.nextDouble();

            scanner.nextLine();

            products.add(temp);
        }
        scanner.close();

        double totalRevenue = 0;
        for (Product product : products) {
            System.out.println("The product revenue for " + product.name + " will be " + product.productRevenue());
            totalRevenue += product.productRevenue();
        }

        System.out.println("Total money made from all products: " + totalRevenue);
    }
}