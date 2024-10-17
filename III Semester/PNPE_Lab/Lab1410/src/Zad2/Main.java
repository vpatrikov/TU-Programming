package Zad2;

public class Main {
    public static void main(String[]args){
        People p1 = new People("Kaloyan", "Petrov", "12/03/2001");
        People p2 = new People();
        p2.setFName("Vladimir");
        p2.setLName("Vasilev");
        p2.setDob("11/11/2003");

        Student st1 = new Student("Martin", "Nikolov", "05/04/2004",
                "121223746", 4.12, 2.35, 5.50);

        String st1FullName = st1.getFName() + " " + st1.getLName();
        System.out.println(st1FullName);

        p1.setFName("Kolyo");
    }
}
