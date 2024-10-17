package Zad1;

public class Teacher extends Person {
    private Course course;

    public Teacher(String fname, String lname, Course course){
        super(fname, lname);
        this.course = course;
    }

    public void setCourse(Course course){
        this.course = course;
    }
    public String getCourse(){
        return course.getName();
    }
}

