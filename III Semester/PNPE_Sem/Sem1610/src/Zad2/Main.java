package Zad2;
import java.util.Scanner;

public class Main {
    public static void main(String[]args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = 0;
        while(true){
            age = scanner.nextInt();
            if (age < 2024 && age > 0){
                break;
            }
            else{
                System.out.println("Invalid age!");
            }
        }
        scanner.close();
        int year_of_birth = 2024 - age;
        System.out.println("You were born in " + year_of_birth);
    }
}
