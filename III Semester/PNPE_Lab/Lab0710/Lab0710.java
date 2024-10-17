/* Petko Danov
    danov@tu-sofia.bg
    na izpita obiknoveno trqbva da se pishe mnogonishkov server
*/
import java.util.Scanner;

public class Lab0710 {
    public static void main(String[]args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter your first name: ");
        String first_name = scanner.nextLine();
        System.out.println("Enter your last name: ");
        String last_name = scanner.nextLine();

        String[] full_name = {first_name, last_name};

        for (String s : full_name){
            System.out.print(s + " ");
        }

        scanner.close();

    }
}
