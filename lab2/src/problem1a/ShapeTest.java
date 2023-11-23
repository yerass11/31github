package problem1a;

import java.util.*;

public class ShapeTest {
    public static void main(String[] args) {
        Cylinder cylinder = new Cylinder(5.0, 10.0);
        
        Sphere sphere = new Sphere(4.0);

        Cube cube = new Cube(6.0);

        System.out.println("Cylinder Information:" + cylinder.getInfo());

        System.out.println("\nSphere Information:" + sphere.getInfo());

        System.out.println("\nCube Information:" + cube.getInfo());
    }
}
