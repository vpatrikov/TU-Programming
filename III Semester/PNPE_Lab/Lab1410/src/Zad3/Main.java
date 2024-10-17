package Zad3;

public class Main {
    public static void main(String[]args){
        Laptop l1 = new Laptop (16.4, "i5-8250U", 16, 500);
        Laptop l2 = new Laptop ();

        l2.setVoltage(19);
        l2.setCpuModel("i7-8550U");
        l2.setRamSize(32);
        l2.setDiskSize(750);

        String l1Info = l1.toString();
        String l2Info = l2.toString();

        if (l1.isBetter(l2)){
            System.out.println(l1Info + "is better than" + l2Info);
        }else{
            System.out.println(l1Info + "is not better than" + l2Info);
        }
    }
}
