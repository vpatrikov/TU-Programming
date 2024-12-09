package Examples;
import java.util.Scanner;

public class ThreadExample {
    private static int a = 0;
    public static void main (String[]args){
        Scanner sc = new Scanner(System.in);
        Runnable r1 = () -> {
            while(true){
                a = Integer.parseInt(sc.nextLine());

            }
        };

        Runnable r2 = () -> {
            while (true) {
                System.out.println(a);
                try{
                    Thread.sleep(2000);
                } catch(InterruptedException e){
                    e.printStackTrace();
                }
            }
        };

        Thread t1 = new Thread(r1);
        Thread t2 = new Thread(r2);

        t1.start();
        t2.start();
    }
}
