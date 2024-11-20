package Zad1;

public abstract class Product{
	private String invertoryNumber;
	private double price;
	private int quantity;
	private String provider;

	public String getInvertoryNumber() {
		return invertoryNumber;
	}

	public void setInvertoryNumber(String invertoryNumber) {
		this.invertoryNumber = invertoryNumber;
	}

	public double getPrice() {
		return price;
	}

	public void setPrice(double price) {
		this.price = price;
	}

	public int getQuantity() {
		return quantity;
	}

	public void setQuantity(int quantity) {
		this.quantity = quantity;
	}

	public String getProvider() {
		return provider;
	}

	public void setProvider(String provider) {
		this.provider = provider;
	}

	public Product(){

	}

	public Product(String invertoryNumber, double price, int quantity, String provider){
		this.invertoryNumber = invertoryNumber;
		this.price = price;
		this.quantity = quantity;
		this.provider = provider;
	}
	abstract double getPromotionalPrice();
	abstract boolean sellProduct(int piece);

}
