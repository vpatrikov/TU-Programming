import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class UNameValidator {
	private Pattern pattern;
	private Matcher matcher;

	private static final String USERNAME_PATTERN = "^[a-z0-9_-]{3,15}$";

	public UNameValidator() {
		pattern = Pattern.compile(USERNAME_PATTERN);
	}

	public boolean validateUsername(final String username) {
		matcher = pattern.matcher(username);
		return matcher.matches();
	}
}
