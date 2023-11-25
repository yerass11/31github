package problem3;

import java.util.ArrayList;
import java.util.HashSet;

public interface MyCollection {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<>();
        cars.add("BMW");
        cars.add("TOYOTA");
        cars.add("NISSAN");
        System.out.println(cars);

        HashSet<Integer> as = new HashSet<>();

        cars.clear();
        System.out.println(cars);

        cars.add("BMW");
        cars.add("TOYOTA");
        cars.add("NISSAN");

        System.out.println(cars.contains("BMW"));


        System.out.println(cars.isEmpty());

        ArrayList<String> cars1 = new ArrayList<>();
        cars1.add("BMW");
        cars1.add("TOYOTA");
        cars1.add("NISSAN");

        System.out.println(cars.equals(cars1));
    }
}
