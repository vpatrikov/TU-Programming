import java.util.Scanner;

//import org.springframework.boot.autoconfigure.SpringBootApplication;

//@SpringBootApplication
public class Main{

	private static final CooperativeCompany cooperativeCompany = new CooperativeCompany("Cooperative Bank", 1000000, "Location A");
	private static final CommercialCompany commercialCompany = new CommercialCompany("Commercial Bank", 2000000, "Location B");

	public static void main(String[] args) {
		// SpringApplication.run(Semlab2Application.class, args);


		Scanner scanner = new Scanner(System.in);
		displayInstructions();

		boolean running = true;
		while (running) {
			String companyTypeChoice = scanner.next();

			CompanyType companyType = getCompanyType(companyTypeChoice);
			if (companyType == null) {
				continue;
			}
			int choice = getChoice(scanner, companyType);

			switch (choice) {
				case 1:
					addCustomer(companyType, scanner);
					break;
				case 2:
					// Implement withdraw logic here
					break;
				case 3:
					transferFunds(companyType, scanner);
					break;
				case 4:
					// Implement display customers logic here
					break;
				case 5:
					running = false;
					break;
				default:
					System.out.println("Invalid choice!");
			}
			System.out.println();
		}
		scanner.close();
	}

	private static int getChoice(Scanner scanner, CompanyType companyType) {
		int choice;
		System.out.println("");
		System.out.println("Selected Company Type: " + companyType.getValue());

		System.out.println("1. Add Customer (" + companyType.getValue() + ")");
		System.out.println("2. Withdraw (" + companyType.getValue() + ")");
		System.out.println("3. Transfer (" + companyType.getValue() + ")");
		System.out.println("4. Display Customers (" + companyType.getValue() + ")");
		System.out.println("5. Exit");
		System.out.print("Enter your choice: ");
		choice = scanner.nextInt();
		return choice;
	}

	private static CompanyType getCompanyType(String companyTypeChoice) {
		CompanyType companyType;
		if (companyTypeChoice.equalsIgnoreCase(CompanyType.COOPERATIVE.getValue())) {
			companyType = CompanyType.COOPERATIVE;
		} else if (companyTypeChoice.equalsIgnoreCase(CompanyType.COMMERCIAL.getValue())) {
			companyType = CompanyType.COMMERCIAL;
		} else {
			System.out.println("Invalid company type. Please try again.");
			return null;
		}
		return companyType;
	}

	private static void displayInstructions() {

		System.out.println("");
		System.out.println("1. Add Customer");
		System.out.println("2. Withdraw");
		System.out.println("3. Transfer");
		System.out.println("4. Display Customers");
		System.out.println("5. Exit");
		System.out.print("Enter the type of company (coop for Cooperative, comm for Commercial): ");
	}

	private static void addCustomer(CompanyType companyType, Scanner scanner) {
		System.out.print("Enter customer name: ");
		String name = scanner.next();

		System.out.print("Enter customer ID number: ");
		String idNumber = scanner.next();

		System.out.print("Enter initial balance: ");
		double balance = scanner.nextDouble();

		System.out.print("Enter credit limit: ");
		double creditLimit = scanner.nextDouble();

		if (companyType == CompanyType.COOPERATIVE) {
			cooperativeCompany.addCustomer(name, idNumber, balance, creditLimit);
			System.out.println("Customer added successfully to Cooperative Company.");
		} else {
			commercialCompany.addCustomer(name, idNumber, balance, creditLimit);
			System.out.println("Customer added successfully to Commercial Company.");
		}
	}

	public static void withdrawFunds(CompanyType companyType, Scanner scanner){
		System.out.println("Enter the customer's ID number: ");
		String customerId = scanner.nextLine();
		System.out.println("Enter withdrawal amount: ");
		double amount = scanner.nextDouble();
	}

	private static void transferFunds(CompanyType companyType, Scanner scanner) {
		System.out.print("Enter sender's ID number: ");
		String senderId = scanner.next();

		System.out.print("Enter recipient's ID number: ");
		String recipientId = scanner.next();

		System.out.print("Enter transfer amount: ");
		double amount = scanner.nextDouble();

		Bank company;
		if (companyType == CompanyType.COOPERATIVE) {
			company = cooperativeCompany;
		} else {
			company = commercialCompany;
		}

		boolean transferSuccessful = company.transfer(senderId, recipientId, amount);
		if (transferSuccessful) {
			System.out.println("Transfer successful.");
		} else {
			System.out.println("Transfer failed. Please check the details and try again.");
		}
	}
}