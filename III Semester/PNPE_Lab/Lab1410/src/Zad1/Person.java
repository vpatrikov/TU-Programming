package Zad1;

public class Person {
    String fname;
    String lname;

    public Person()
    {
        this.fname = "";
        this.lname = "";
    }
    public Person(String name, String lname)
    {
        this.fname = name;
        this.lname = lname;
    }
    public void sayName(String name)
    {
        System.out.println("Hello" + name);
    }
}
