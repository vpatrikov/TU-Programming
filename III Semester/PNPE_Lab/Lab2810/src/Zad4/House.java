package Zad4;
import java.util.Scanner;
public class House extends Building{
	private int floors;
	private String ownerName;

	public int getFloors(){
		return floors;
	}
	public void setFloors(int floors){
		if (floors <= 0) throw new BuildingException("Invalid number of floors");
		this.floors = floors;
	}

	public String getOwnerName(){
		return ownerName;
	}
	public void setOwnerName(String ownerName){
		this.ownerName = ownerName;
	}

	public House(){
	}
	public House(int height, double area, String address, int floors, String ownerName){
		super(height, area, address);
		this.floors = floors;
		this.ownerName = ownerName;
	}

	public void input(Scanner scanner){
		System.out.println("Enter the height of the house: ");
		setHeight(scanner.nextInt());
		System.out.println("Enter the area of the house: ");
		setArea(scanner.nextDouble());
		scanner.nextLine();
		System.out.println("Enter the address of the house: ");
		setAddress(scanner.nextLine());
	}
}
