import java.util.Scanner;

public class BrokenDevice extends Device{
    private String symptoms;
    private int daysToFix;

    public String getSymptoms(){
        return symptoms;
    }

    public void setSymptoms(String symptoms){
        this.symptoms = symptoms;
    }

    public int getDaysToFix(){
        return daysToFix;
    }

    public void setDaysToFix(int daysToFix){
        this.daysToFix = daysToFix;
    }

    public BrokenDevice(String brand, String model, double price, String symptoms, int daysToFix){
        super(brand, model, price);
        this.symptoms = symptoms;
        this.daysToFix = daysToFix;
    }

    public BrokenDevice(){

    }

    @Override
    public void enterDevice(Scanner scanner){
        System.out.println("Enter the brand of the device: ");
        setBrand(scanner.nextLine());
        System.out.println("Enter the model of the device: ");
        setModel(scanner.nextLine());
        System.out.println("Enter the price of the device: ");
        setPrice(scanner.nextDouble());
        scanner.next();
        System.out.println("Enter the symptoms of the broken device: ");
        setSymptoms(scanner.nextLine());
        System.out.println("Enter the days required to fix days: ");
        setDaysToFix(scanner.nextInt());
        scanner.next();
    }

    @Override
    public String toString(){
        return "Brand: " + getBrand() + " Model: " + getModel() + " Price: " + getPrice() +
                "\n" + "Symptoms: " + getSymptoms() + " Days to fix: " + getDaysToFix();
    }
}
