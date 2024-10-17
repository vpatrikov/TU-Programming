package Zad1;

public class Test {
        public static void main(String[]args){
    Course pnpe = new Course("PNPE");
    /* nqkolko obekta ot tip teacher i obhojdasht i izvejdasht na ekrana imeto na kursa*/
    Teacher t1 = new Teacher("Ivan", "Georgiev", pnpe);
    Teacher t2 = new Teacher("Daniela", "Goceva", pnpe);
    Teacher t3 = new Teacher("Petko", "Danov", pnpe);

    Teacher[] teachers = {t1, t2, t3};

        for(Teacher teacher : teachers){
            System.out.println(teacher.fname + " " + teacher.lname + " " + teacher.getCourse());
        }
    }
}

