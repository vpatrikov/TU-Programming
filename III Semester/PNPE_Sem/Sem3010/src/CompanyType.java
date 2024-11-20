public enum CompanyType {
	COOPERATIVE("coop"),
	COMMERCIAL("comm");

	private String value;

	private CompanyType(String value) {
		this.value = value;
	}

	public String getValue() {
		return value;
	}
}