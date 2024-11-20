package Zad1;

import java.io.*;

public class ProductLoader implements ImportData {
	public int getNumberofRows(){
		int lines = 0;
		try (BufferedReader reader = new BufferedReader(new FileReader("salesproducts.txt"))) {
			while (reader.readLine() != null) lines++;
		} catch (IOException e) {
			System.err.println("There was an error " + e.getMessage());
		}
		return lines;
	}

	@Override
	public Object[] importDataFromFile() throws IOException {
		String line;
		int index = 0;
		Product[] products = new Product[getNumberofRows()];
		try(BufferedReader reader = new BufferedReader(new FileReader("salesproduct.txt"))){
			while((line = reader.readLine()) != null){
				String []parts = line.split("#");
				if (parts.length < 7){
					System.err.println("Invalid line format: " + line);
					break;
				}

				if(line.startsWith("1")){
					products[index++] = new Electronics(parts[3], Double.parseDouble(parts[4]), Integer.parseInt(parts[5]),
							parts[1], parts[6], parts[7]);
				}else if(line.startsWith("2")){
					products[index++] = new Book(parts[3], Double.parseDouble(parts[4]), Integer.parseInt(parts[5]),
							parts[1]);
				}

			}
		}catch (IOException e){
			System.err.println("There was an error" + e.getMessage());
		}

		return new Object[0];
	}
}
