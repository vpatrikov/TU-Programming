package Zad4;
import java.util.Scanner;
public class Main {

    public static double discountedPrice(String customerName, int loyaltyLevel, double priceToPay) {
        double finalPrice;
        switch (loyaltyLevel) {
            case 1:
                finalPrice = priceToPay - (priceToPay * 0.1);
                break;
            case 2:
                finalPrice = priceToPay - (priceToPay * 0.15);
                break;
            case 3:
                finalPrice = priceToPay - (priceToPay * 0.25);
                break;
            default:
                System.out.println("Invalid loyalty level");
                finalPrice = 0;
                break;
        }
        return finalPrice;
    }

    public static void main(String[]args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the name of the customer: ");
        String customerName = scanner.nextLine();
        System.out.println("Enter the price that the customer has to pay: ");
        double priceToPay = scanner.nextDouble();
        System.out.println("Enter the loyalty level of the customer (1 to 3)");
        int loyaltyLevel = scanner.nextInt();

        scanner.close();

        double finalPrice = discountedPrice(customerName, loyaltyLevel, priceToPay);
        System.out.println(finalPrice + " will be paid.");


    }
}
