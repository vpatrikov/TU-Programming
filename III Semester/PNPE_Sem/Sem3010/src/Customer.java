class Customer {
	private String name;
	private String idNumber; // IBAN
	private double balance;
	private double creditLimit;
	private static int totalNumberOfCustomers;
	private boolean active;

	public Customer() {
		totalNumberOfCustomers++;
	}

	public Customer(String name, String idNumber, double balance, double creditLimit) {
		this.name = name;
		this.idNumber = idNumber;
		this.balance = balance;
		this.creditLimit = creditLimit;
		totalNumberOfCustomers++;
	}

	public String getName() {
		return name;
	}

	public String getIdNumber() {
		return idNumber;
	}

	public double getBalance() {
		return balance;
	}

	public void setBalance(double balance) {
		this.balance = balance;
	}

	public double getCreditLimit() {
		return creditLimit;
	}

	public static int getTotalNumberOfCustomers() {
		return totalNumberOfCustomers;
	}

	@Override
	public String toString() {
		return "Name: " + name + ", ID: " + idNumber + ", Balance: " + balance + ", Credit Limit: " + creditLimit;
	}
}
