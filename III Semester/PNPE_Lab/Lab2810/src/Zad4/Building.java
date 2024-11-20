package Zad4;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Building {
	private int height;
	private double area;
	private String address;

	public int getHeight(){
		return height;
	}

	public void setHeight(int height){
		if(height <= 0) throw new BuildingException("Invalid value for height (should be larger than 0)");
		this.height = height;
	}

	public double getArea(){
		return area;
	}

	public void setArea(double area){
		if (area <= 0) throw new BuildingException("Invalid value for area (should be larger than 0)");
		this.area = area;

	}

	public String getAddress(){
		return address;
	}
	public void setAddress(String address){
		this.address = address;
	}

	public Building(){

	}

	public Building(int height, double area, String address) throws BuildingException{
		setHeight(height);
		setArea(area);
		setAddress(address);
	}

	public void displayBuilding(){
		System.out.println("Height: " + height + "\nArea: " + area + "\nAddress: " + address);
	}

	public void enterBuildingInfo(Scanner scanner){
		int entered = 0;
		do {
			try {
				switch(entered) {
					case 0:
						System.out.println("Enter the height of the building: ");
						setHeight(scanner.nextInt());
						entered++;
						break;
					case 1:
						System.out.println("Enter the area of the building: ");
						setArea(scanner.nextDouble());
						scanner.nextLine();
						entered++;
						break;
					case 3:
						System.out.println("Enter the address of the building: ");
						setAddress(scanner.nextLine());
						entered++;
						break;
				}
			} catch(InputMismatchException e){
				System.err.println("Invalid input type. Please enter the correct type of value.");
				scanner.nextLine();
			}
		}while(entered < 4);
	}
}
