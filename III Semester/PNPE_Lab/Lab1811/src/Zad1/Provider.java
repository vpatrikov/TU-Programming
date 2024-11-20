package Zad1;

public class Provider {
	private String name;
	private String phoneNumber;

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getPhoneNumber() {
		return phoneNumber;
	}

	public void setPhoneNumber(String phoneNumber) {
		this.phoneNumber = phoneNumber;
	}

	public Provider(String name, String phoneNumber){
		this.name = name;
		this.phoneNumber = phoneNumber;
	}
}
