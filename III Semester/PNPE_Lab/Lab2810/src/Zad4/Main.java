package Zad4;
import java.util.Scanner;

public class Main {
	public static void main(String[]args){
		Scanner scanner = new Scanner(System.in);
		Building building = new Building();

		building.enterBuildingInfo(scanner);

		System.out.println(building.getHeight());
		System.out.println(building.getArea());
		System.out.println(building.getAddress());
	}
}
