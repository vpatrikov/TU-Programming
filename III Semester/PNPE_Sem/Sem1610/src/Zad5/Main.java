package Zad5;
import java.util.Scanner;
import java.util.ArrayList;

public class Main {

    public static void displayMenu(){
        System.out.println("What do you want to do?\n");
        System.out.println("1. View to-do list\n2. Add to to-do list\n3. Delete from to-do list\n4. Exit");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> todo = new ArrayList<>();

        while (true) {
            displayMenu();
            int choice = scanner.nextInt();
            scanner.nextLine();

            if (choice >= 1 && choice <= 4) {
                if (choice == 1) {
                    if (!todo.isEmpty()) {
                        for (int i = 0; i < todo.size(); i++) {
                            System.out.println(i + ". " + todo.get(i));
                        }
                        System.out.println("\n");
                    } else {
                        System.out.println("Todo list is empty\n");
                    }
                } else if (choice == 2) {
                    System.out.println("Enter your task:\n");
                    String task = scanner.nextLine();
                    todo.add(task);
                } else if (choice == 3) {
                    if (!todo.isEmpty()) {
                        for (int i = 0; i < todo.size(); i++) {
                            System.out.println(i + ". " + todo.get(i));
                        }
                        System.out.println("\n\n");
                        System.out.println("Enter the index of the task you want to remove: ");
                        int index = scanner.nextInt();
                        scanner.nextLine();

                        if (index >= 0 && index < todo.size()) {
                            todo.remove(index);
                            System.out.println("Removed task" + index + " successfully");
                        } else {
                            System.out.println("Invalid index");
                        }
                    } else {
                        System.out.println("Todo list is empty");
                    }
                } else if (choice == 4) {
                    break;
                }

            } else {
                System.out.println("Invalid Choice");
            }
        }

        scanner.close();
    }
}
