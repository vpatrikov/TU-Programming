package Zad1;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public interface ValdiatePhone {
	static boolean validatePhoneNumber(String phoneNumber){
		Pattern pattern;
		Matcher matcher;

		final String PHONENUM_PATTERN = "[0\\d{9}]";

		pattern = Pattern.compile(PHONENUM_PATTERN);
		matcher = pattern.matcher(phoneNumber);
		if(!matcher.matches()){
			throw new WrongPhoneNumberException("Invalid Phone Number");
		}else{
			return true;
		}
	}
}
