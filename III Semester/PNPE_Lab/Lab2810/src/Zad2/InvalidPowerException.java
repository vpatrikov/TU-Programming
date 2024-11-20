package Zad2;

public class InvalidPowerException extends Exception {
	@Override
	public String getMessage() {
		return "Error: Power must be a positive number!";
	}
}

