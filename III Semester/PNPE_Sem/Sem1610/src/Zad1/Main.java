/*
* Galina Ivanova
* */
package Zad1;
import java.util.Scanner;

public class Main {

    public static boolean isEven(int a){
        return a % 2 == 0;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int a = scanner.nextInt();
        if (isEven(a)){
            System.out.println("The number is even\n");
        } else {
            System.out.println("The number is odd\n");
        }

        scanner.close();
    }
}