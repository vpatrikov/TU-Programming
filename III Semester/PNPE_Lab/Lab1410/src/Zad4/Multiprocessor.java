package Zad4;

public class Multiprocessor {
    int cpuCount;
    int coreCount;
    double cpuFrequency;

    public Multiprocessor()
    {
        this.cpuCount = 0;
        this.coreCount = 0;
        this.cpuFrequency = 0;
    }
    public Multiprocessor (int cpuCount, int coreCount, int cpuFrequency){
        this.cpuCount = cpuCount;
        this.coreCount = coreCount;
        this.cpuFrequency = cpuFrequency;
    }

    public int getCpuCount(){
        return cpuCount;
    }

    public void setCpuCount(int cpuCount){
        this.cpuCount = cpuCount;
    }

    public int getCoreCount(){
        return coreCount;
    }

    public void setCoreCount(int coreCount){
        this.coreCount = coreCount;
    }

    public double getCpuFrequency(){
        return cpuFrequency;
    }

    public void setCpuFrequency(double cpuFrequency) {
        this.cpuFrequency = cpuFrequency;
    }

    public double multiCpuClock(int coreCount, int cpuCount, double cpuFrequency){
         return (0.7 * coreCount) * (0.8 * cpuCount) * cpuFrequency;
    }

    public double timeForCompletion(int cpuCount, double cpuFrequency, double multiCpuClock, int time){
        return (time * cpuFrequency) / multiCpuClock;
    }

    public String toString(){
        return "CPU Count: " + cpuCount + "Core count: " + coreCount + "CPU Freq: " +
                cpuFrequency + "\n";
    }
}
