package Zad3;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		EventLog log = new EventLog();
		Scanner scanner = new Scanner(System.in);
		int choice;

		do {
			System.out.println("What do you want to do");
			System.out.println("1. Add event\n2. Delete event\n3. List all events\n4. Get event\n5. Exit");
			choice = scanner.nextInt();
			scanner.nextLine();

			switch (choice) {
				case 1:
					System.out.println("Enter event description:");
					String temp = scanner.nextLine();
					log.addEvent(temp);
					break;
				case 2:
					System.out.println("Enter index to delete:");
					int index = scanner.nextInt();
					scanner.nextLine();
					log.deleteEvent(index);
					break;
				case 3:
					log.print();
					break;
				case 4:
					System.out.println("Enter index to get:");
					int index1 = scanner.nextInt();
					scanner.nextLine();
					log.getEvent(index1);
					break;
				case 5:
					System.out.println("Exiting...");
					break;
				default:
					System.err.println("Invalid Input");
					break;
			}
		} while (choice != 5);

		scanner.close();
	}
}
