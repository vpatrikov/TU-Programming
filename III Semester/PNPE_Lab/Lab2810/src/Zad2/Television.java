package Zad2;

public class Television extends Product implements ElectricalAppliance {
	private String manufacturer;
	private String model;
	private double power;

	public Television(double price, int itemNumber, String manufacturer, String model, double power) {
		super(price, itemNumber);
		this.manufacturer = manufacturer;
		this.model = model;
		this.power = power;
	}

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

	public double getPower() {
		return power;
	}

	public void setPower(double power) {
		this.power = power;
	}

	@Override
	public double checkPromo() {
		return getPrice() * 0.91;
	}

	@Override
	public double calculateEnergyConsumption(double hours) {
		return (power / 1000) * hours;
	}
}

