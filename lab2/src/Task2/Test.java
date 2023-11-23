package Task2;

import java.util.HashSet;

public class Test {
    public static void main(String[] args) {
        HashSet<Vehicle> vehicleSet = new HashSet<>();

        Car car1 = new Car("ABC123");
        Car car2 = new Car("XYZ789");
        Car car3 = new Car("ABC123");

        vehicleSet.add(car1);
        vehicleSet.add(car2);
        vehicleSet.add(car3);

        System.out.println("Number of elements in the HashSet: " + vehicleSet.size());
        
        for (Vehicle vehicle : vehicleSet) {
            vehicle.startEngine();
        }
        
        System.out.println(car1.equals(car3));
    }
}
