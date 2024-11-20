import java.util.Scanner;
import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		UNameValidator uNameValidator = new UNameValidator();
		PassValidator passValidator = new PassValidator();

		ArrayList<User> userList = new ArrayList<User>();

		userList.add(new User("vpatrikov", "password", "0875643318"));
		userList.add(new User("mipopov", "Pir24mq@!", "0864582913"));

		System.out.println("Register\nLogin");
		String choice = scanner.nextLine();

		if (choice.equalsIgnoreCase("register")) {
			int count = 0;
			User newUser = new User();
			String username = null;
			String password = null;
			String phoneNumber = null;

			do {
				if (count == 0) {
					System.out.println("Enter username: ");
					username = scanner.nextLine();

					boolean usernameTaken = false;
					for (User user : userList) {
						if (user.getUsername().equals(username)) {
							System.out.println("Username already taken!");
							usernameTaken = true;
							break;
						}
					}

					if (!usernameTaken) {
						if (uNameValidator.validateUsername(username)) {
							System.out.println("Username is valid!");
							newUser.setUsername(username);
							count++;
						} else {
							System.out.println("Invalid username!");
						}
					}
				} else if (count == 1) {
					System.out.println("Enter password: ");
					password = scanner.nextLine();

					if (passValidator.validatePassword((password))) {
						System.out.println("Password is valid!");
						newUser.setPassword(password);
						count++;
					} else {
						System.out.println("Invalid password!");
					}
				} else {
					System.out.println("Enter phone numbber: ");
					phoneNumber = scanner.nextLine();

					if (newUser.validatePhoneNumber(phoneNumber)) {
						System.out.println("Phone number is valid!");
						newUser.setTelephoneNum(phoneNumber);
						userList.add(newUser);
						count++;
					} else {
						System.out.println("Invalid phone number!");
					}
				}
			} while (count != 3);
		} else if (choice.equalsIgnoreCase("login")) {
			String username;
			String password;
			String repPassword;
			boolean isLoginSuccessful = false;
			System.out.println("Enter username: ");
			username = scanner.nextLine();

			for (User user : userList) {
				if (user.getUsername().equals(username)) {
					while (true) {
						System.out.println("Enter password: ");
						password = scanner.nextLine();

						if (password.equals(user.getPassword())) {
							while (true) {
								System.out.println("Repeat password: ");
								repPassword = scanner.nextLine();

								if (repPassword.equals(password)) {
									isLoginSuccessful = true;
									break;
								} else {
									System.out.println("Passwords do not match. Please try again.");
								}
							}
							break;
						} else {
							System.out.println("Incorrect password. Please try again.");
						}
					}
					break;
				}
			}

			if (!isLoginSuccessful) {
				throw new WrongUserException("Invalid username or password");
			} else {
				System.out.println("Login successful!");
			}
		}


	}
}
