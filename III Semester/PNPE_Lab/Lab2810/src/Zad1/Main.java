package Zad1;

import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		// Create a new course
		CCourse course = new CCourse();

		// Add students to the course
		course.addStudent("Kaloyan Petrov", "121223473");
		course.addStudent("Mario Georgiev", "121223645");

		// Create a list of subjects and grades for a student
		ArrayList<Subject> kaloyanSubjects = new ArrayList<>();
		kaloyanSubjects.add(new Subject("Math III", 4.30));
		kaloyanSubjects.add(new Subject("PNPE", 3.50));

		ArrayList<Subject> bobSubjects = new ArrayList<>();
		bobSubjects.add(new Subject("Math III", 2.10));
		bobSubjects.add(new Subject("PNPE", 5.20));

		try {
			course.addScores("121223473", kaloyanSubjects);
		} catch (StudentNotFoundException e) {
			System.out.println(e.getMessage());
		}

		try {
			course.addScore("121223645", "Math", 5);
			course.addScore("121223645", "PNPE", 3.10);
		} catch (StudentNotFoundException e) {
			System.out.println(e.getMessage());
		}

		try {
			course.addScore("121223120", "PPE", 3.24);
		} catch (StudentNotFoundException e) {
			System.out.println(e.getMessage());
		}

		course.displayScores();
	}
}
