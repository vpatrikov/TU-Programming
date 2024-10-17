package Zad3;

public class ElectronicDevice{
    double voltage;
    String cpuModel;

    public ElectronicDevice(){
        this.voltage = 0;
        this.cpuModel = "";
    }
    public ElectronicDevice(double voltage, String cpuModel){
        this.voltage = voltage;
        this.cpuModel = cpuModel;
    }

    public double getVoltage(){
        return voltage;
    }

    public void setVoltage(double voltage){
        this.voltage = voltage;
    }

    public String getCpuModel(){
        return cpuModel;
    }
    public void setCpuModel(String cpuModel){
        this.cpuModel = cpuModel;
    }

    public void turnDeviceOn(){
        System.out.println("The device is now turned on");
    }

    public void turnDeviceOff(){
        System.out.println("The device is now turned off");
    }
}
