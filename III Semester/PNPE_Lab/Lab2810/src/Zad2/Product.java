package Zad2;

public abstract class Product {
	private double price;
	private int itemNumber;

	public Product(double price, int itemNumber) {
		this.price = price;
		this.itemNumber = itemNumber;
	}

	public double getPrice() {
		return price;
	}

	public void setPrice(double price) {
		this.price = price;
	}

	public int getItemNumber() {
		return itemNumber;
	}

	public void setItemNumber(int itemNumber) {
		this.itemNumber = itemNumber;
	}

	public abstract double checkPromo();
}

