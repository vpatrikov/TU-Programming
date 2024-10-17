package Zad2;

public class Student extends People {
    String fNum;
    double pikGrade;
    double teGrade;
    double ppeGrade;

    public Student(){
        super();
        this.fNum = "";
        this.pikGrade = 0;
        this.teGrade = 0;
        this.ppeGrade = 0;
    }

    public Student(String fname, String lname, String dob, String fNum,
                   double pikGrade, double teGrade, double ppeGrade){
        super(fname, lname, dob);
        this.pikGrade = pikGrade;
        this.teGrade = teGrade;
        this.ppeGrade = ppeGrade;
    }

    public String getFnum(){
        return fNum;
    }

    public void setFnum(String fNum){
        this.fNum = fNum;
    }

    public double getPikGrade(){
        return pikGrade;
    }

    public void setPikGrade(double pikGrade){
        this.pikGrade = pikGrade;
    }

    public double getTeGrade()
    {
        return teGrade;
    }

    public void setTeGrade(double teGrade){
        this.teGrade = teGrade;
    }

    public double getPpeGrade(){
        return ppeGrade;
    }

    public void setPpeGrade(double ppeGrade){
        this.ppeGrade = ppeGrade;
    }


}
