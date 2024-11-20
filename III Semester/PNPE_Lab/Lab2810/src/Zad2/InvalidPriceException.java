package Zad2;

public class InvalidPriceException extends Exception {
	@Override
	public String getMessage() {
		return "Error: Price cannot be negative!";
	}
}

