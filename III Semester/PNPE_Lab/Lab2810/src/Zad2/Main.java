package Zad2;
public class Main {
	public static void main(String[] args) {
		try {
			Book book = new Book(30.0, 1001, "Ivan Vazov", "Pod Igoto");
			System.out.println("Original price of book: $" + book.getPrice());
			System.out.println("Promotional price of book: $" + book.checkPromo());

			Television tv = new Television(500.0, 2001, "Samsung", "QLED", 150.0);
			System.out.println("\nOriginal price of TV: $" + tv.getPrice());
			System.out.println("Promotional price of TV: $" + tv.checkPromo());
			System.out.println("Energy consumption for 5 hours: " + tv.calculateEnergyConsumption(5) + " kWh");

			if (book.getPrice() < 0) {
				throw new InvalidPriceException();
			}

			if (tv.getPower() <= 0) {
				throw new InvalidPowerException();
			}
		} catch (InvalidPriceException | InvalidPowerException e) {
			System.out.println(e.getMessage());
		}
	}
}
