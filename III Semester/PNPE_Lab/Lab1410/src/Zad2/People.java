package Zad2;

public class People {
    String fname;
    String lname;
    String dob;

    public People()
    {
        this.fname = "";
        this.lname = "";
        this.dob = "";
    }

    public People(String fname, String lname, String dob){
        this.fname = fname;
        this.lname = lname;
        this.dob = dob;
    }

    public void setFName(String fname){
        this.fname = fname;
    }

    public String getFName(){
        return fname;
    }

    public void setLName(String lname){
        this.lname = lname;
    }

    public String getLName(){
        return lname;
    }

    public void setDob(String dob){
        this.dob = dob;
    }

    public String getDob(){
        return dob;
    }
}
