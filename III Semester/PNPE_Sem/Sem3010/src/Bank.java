import java.util.LinkedList;

abstract class Bank {
	protected String name;
	protected double capital;
	protected String location;
	protected LinkedList<Customer> customers;

	public Bank(String name, double capital, String location) {
		this.name = name;
		this.capital = capital;
		this.location = location;
		this.customers = new LinkedList<>();
	}

	public abstract void addCustomer(String name, String idNumber, double balance, double creditLimit);

	public abstract void withdraw(String idNumber, double amount);

	public abstract boolean transfer(String senderIdNumber, String receiverIdNumber, double amount);

	public void displayCustomers() {
		System.out.println("Customers:");
		for (Customer customer : customers) {
			System.out.println(customer);
		}
	}
}