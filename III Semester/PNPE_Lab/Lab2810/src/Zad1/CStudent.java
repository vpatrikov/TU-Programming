package Zad1;

import java.util.ArrayList;

public class CStudent {
	private String name;
	private String fn;
	private ArrayList<Subject> scores = new ArrayList<>();

	public CStudent(String name, String fn) {
		this.name = name;
		this.fn = fn;
	}

	public String getName() {
		return name;
	}

	public String getFn() {
		return fn;
	}

	public ArrayList<Subject> getScores() {
		return scores;
	}

	public void addGrade(String subjectName, double grade) {
		boolean found = false;
		for (Subject subject : scores) {
			if (subject.getName().equals(subjectName)) {
				subject.setGrade(grade);
				found = true;
				break;
			}
		}
		if (!found) {
			scores.add(new Subject(subjectName, grade));
		}
	}

	public double getGrade() {
		double total = 0;
		double average = 0;
		for (Subject subject : scores) {
			total += subject.getGrade();
		}
		if(scores.isEmpty()){
			return average;
		}else{
			try{
				average = total / scores.size();
			}catch(ArithmeticException e){
				System.err.println("Division by zero is not possible");
			}
		}
		return average;
	}
}
