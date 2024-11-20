package Zad1;

public class Book extends Product{
	private String author;
	private String title;

	public String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	public String getAuthor() {
		return author;
	}

	public void setAuthor(String author) {
		this.author = author;
	}

	public Book(){}

	public Book(String invertoryNumber, double price, int quantity, String provider, String author, String title){
		super(invertoryNumber, price, quantity, provider);
		this.author = author;
		this.title = title;
	}

	@Override
	public double getPromotionalPrice(){
		return getPrice() - (getPrice() - 0.5);
	}
	@Override
	public boolean sellProduct(int piece) {
		if (piece > getQuantity()) {
			throw new NoMoreProductsException("Not enough products.");
		} else {
			setPrice(getPrice() - piece);
			return true;
		}
	}
}
