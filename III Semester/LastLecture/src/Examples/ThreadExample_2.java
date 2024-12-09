package Examples;
// za izpita trqbva da znaem kak se startirat, kak im se podava parametur
// i kak se synhronizirat
public class ThreadExample_2 {
    private static int a = 0;
    private static final Object mutex = new Object();

    public static void main(String[]args){
        Runnable r1 = () ->{
            synchronized (mutex){
                for (int i = 0; i < 10000; i++){
                    a++;
                }
            }
        };

        Thread t1 = new Thread(r1);
        Thread t2 = new Thread(r1);

        t1.start();
        t2.start();
        try{
            t1.join();
            t2.join();
        }catch(InterruptedException e){
            e.printStackTrace();
        }
        System.out.println(a);
    }
}
