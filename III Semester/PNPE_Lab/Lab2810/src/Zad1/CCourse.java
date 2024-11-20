package Zad1;

import java.util.ArrayList;

public class CCourse {
	private ArrayList<CStudent> students_list = new ArrayList<>(30);
	private String name;

	public String getName(){
		return name;
	}

	public void addScores(String fn, ArrayList<Subject> gradeList) throws StudentNotFoundException {
		CStudent temp = null;
		for (CStudent student : students_list) {
			if (student.getFn().equals(fn)) {
				temp = student;
				break;
			}
		}

		if (temp != null) {
			for (Subject subject : gradeList) {
				temp.addGrade(subject.getName(), subject.getGrade());
			}
		} else {
			throw new StudentNotFoundException("Student with fak num " + fn + " not found");
		}
	}

	public void addScore(String fn, String subject, double grade) throws StudentNotFoundException {
		CStudent temp = null;
		for (CStudent student : students_list) {
			if (student.getFn().equals(fn)) {
				temp = student;
				break;
			}
		}

		if (temp != null) {
			temp.addGrade(subject, grade);
		} else {
			throw new StudentNotFoundException("Student with fak num " + fn + " not found");
		}
	}

	public void addStudent(String name, String fn) {
		students_list.add(new CStudent(name, fn));
	}

	public void displayScores() {
		for (CStudent student : students_list) {
			System.out.println("Name: " + student.getName());
			System.out.println("Fak num: " + student.getFn());
			System.out.println("Scores:");
			for (Subject subject : student.getScores()) {
				System.out.println(subject.getName() + " - " + subject.getGrade());
			}
			System.out.println("Average grade: " + student.getGrade());
		}
	}
}
