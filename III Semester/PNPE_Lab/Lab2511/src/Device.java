import java.util.Scanner;

public class Device {
    private String brand;
    private String model;
    private double price;

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public Device(String brand, String model, double price){
        this.brand = brand;
        this.model = model;
        this.price = price;
    }

    public Device(){

    }

    public void enterDevice(Scanner scanner){
        System.out.println("Enter the brand of the device: ");
        setBrand(scanner.nextLine());
        System.out.println("Enter the model of the device: ");
        setModel(scanner.nextLine());
        System.out.println("Enter the price of the device: ");
        setPrice(scanner.nextDouble());
        scanner.next();

    }

    @Override
    public String toString(){
        return "Brand: " + getBrand() + " Model: " + getModel() + " Price: " + getPrice();
    }


}
