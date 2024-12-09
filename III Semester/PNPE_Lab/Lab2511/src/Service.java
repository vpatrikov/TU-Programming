import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

public class Service {
    private ArrayList<Device> operational;
    private ArrayList<BrokenDevice> broken;

    public Service() {
        try (ObjectInputStream in = new ObjectInputStream(new FileInputStream("devices.ser"))) {
            operational = (ArrayList<Device>) in.readObject();
            broken = (ArrayList<BrokenDevice>) in.readObject();
        } catch (FileNotFoundException e) {
            System.out.println("No existing data file found. Initializing empty lists.");
            operational = new ArrayList<>();
            broken = new ArrayList<>();
        } catch (IOException | ClassNotFoundException e) {
            System.err.println("Serialization problem: " + e.getMessage());
            operational = new ArrayList<>();
            broken = new ArrayList<>();
        }
    }

    public void displayAllDevices(){
        System.out.println("Operational devices:\n");
        for(Device device : operational){
            System.out.println(device.toString());
        }
        System.out.println("\nBroken devices:\n");
        for(BrokenDevice device : broken){
            System.out.println(device.toString());
        }
    }

    public void enterDevice(String health){
        Scanner scanner = new Scanner(System.in);
        if (health.equals("operational")){
            Device temp = new Device();
            temp.enterDevice(scanner);
            try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("devices.ser"))) {
                out.writeObject(operational);
                out.flush();
                out.close();
            } catch (IOException e) {
                System.err.println("Error saving data to file: " + e.getMessage());
            }

        } else if (health.equals("broken")) {
            BrokenDevice temp = new BrokenDevice();
            try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("devices.ser"))) {
                out.writeObject(broken);
                out.flush();
                out.close();
            } catch (IOException e) {
                System.err.println("Error saving data to file: " + e.getMessage());
            }
            temp.enterDevice(scanner);
        }
    }

    public void addDevice(Device device){
       operational.add(device);
        try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("devices.ser"))) {
            out.writeObject(operational);
            out.flush();
            out.close();
        } catch (IOException e) {
            System.err.println("Error saving data to file: " + e.getMessage());
        }
    }

    public void addBrokenDevice(BrokenDevice device){
        broken.add(device);
        try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("devices.ser"))) {
            out.writeObject(broken);
            out.flush();
            out.close();
        } catch (IOException e) {
            System.err.println("Error saving data to file: " + e.getMessage());
        }
        broken.add(device);
    }

    public void displayAllDevicesSymptom(String symptom){
        for (BrokenDevice device : broken){
            if (device.getSymptoms().equals(symptom)){
                System.out.println(device.toString());
            }
        }
    }
}
