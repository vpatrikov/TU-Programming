package Zad1;

public class Electronics extends Product {
	private String manufacturer;
	private String model;

	public String getManufacturer() {
		return manufacturer;
	}

	public void setManufacturer(String manufacturer) {
		this.manufacturer = manufacturer;
	}

	public String getModel() {
		return model;
	}

	public void setModel(String model) {
		this.model = model;
	}

	public Electronics(String invertoryNumber, double price, int quantity, String provider, String manufacturer, String model) {
		super(invertoryNumber, price, quantity, provider);
		this.manufacturer = manufacturer;
		this.model = model;

	}

	@Override
	public double getPromotionalPrice() {
		return getPrice() - (getPrice() * 0.1);
	}

	@Override
	public boolean sellProduct(int piece) throws NoMoreProductsException {
		if (piece > getQuantity()) {
			throw new NoMoreProductsException("Not enough products.");
		} else {
			setPrice(getPrice() - piece);
			return true;
		}
	}
}
