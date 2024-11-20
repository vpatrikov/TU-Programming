package Zad2;

public class Book extends Product {
	private String author;
	private String title;

	public Book(double price, int itemNumber, String author, String title) {
		super(price, itemNumber);
		this.author = author;
		this.title = title;
	}

	public String getAuthor() {
		return author;
	}

	public void setAuthor(String author) {
		this.author = author;
	}

	public String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	@Override
	public double checkPromo() {
		return getPrice() * 0.85;
	}
}
