package Zad3;

public class Laptop extends ElectronicDevice{
    int ramSize;
    int diskSize;
    public Laptop(){
        super();
        this.ramSize = 0;
        this.diskSize = 0;
    }

    public Laptop(double voltage, String cpuModel, int ramSize, int diskSize){
        super(voltage, cpuModel);
        this.ramSize = ramSize;
        this.diskSize = diskSize;
    }

    public int getRamSize(){
        return ramSize;
    }

    public void setRamSize(int ramSize){
        this.ramSize = ramSize;
    }

    public int getDiskSize(){
        return diskSize;
    }

    public void setDiskSize(int diskSize){
        this.diskSize = diskSize;
    }

    public boolean isBetter(Laptop laptop){
        return this.diskSize > laptop.diskSize && this.ramSize > laptop.ramSize;
    }

    public String toString(){
        return "CPU: " + this.cpuModel + " " + "RAM: " + this.ramSize +
                "\nDisk: " + this.diskSize + "Voltage: " + this.voltage + "\n";
    }
}
