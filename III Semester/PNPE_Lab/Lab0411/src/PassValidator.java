import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class PassValidator {
	private Pattern pattern;
	private Matcher matcher;

	private static final String PASSWORD_PATTERN = "[a-zA-z]{11,}";

	public PassValidator(){
		pattern = Pattern.compile(PASSWORD_PATTERN);
	}

	public boolean validatePassword(final String password){
		matcher = pattern.matcher(password);
		return matcher.matches();
	}
}
