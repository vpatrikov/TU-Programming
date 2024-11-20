import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class User implements ValidatePhone{
	private String username;
	private String password;
	private String telephoneNum;

	public String getUsername(){
		return username;
	}
	public void setUsername(String username){
		this.username = username;
	}

	public String getPassword(){
		return password;
	}
	public void setPassword(String password){
		this.password = password;
	}

	public String getTelephoneNum(){
		return telephoneNum;
	}
	public void setTelephoneNum(String telephoneNum){
		this.telephoneNum = telephoneNum;
	}

	public User(){

	}

	public User(String username, String password, String telephoneNum){
		this.username = username;
		this.password = password;
		this.telephoneNum = telephoneNum;
	}

	public boolean validatePhoneNumber(String telephoneNum) throws WrongPhoneNumberException{
		Pattern pattern;
		Matcher matcher;

		final String PHONENUM_PATTERN = "[0\\d{9}]";

		pattern = Pattern.compile(PHONENUM_PATTERN);
		matcher = pattern.matcher(telephoneNum);
		if(!matcher.matches()){
			throw new WrongPhoneNumberException("Invalid Phone Number");
		}else{
			return true;
		}

	}
}
