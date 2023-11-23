package problem1a;

public class Sphere extends Shapes {
    private double radius;

    public Sphere(double radius) {
        this.radius = radius;
    }

    public Sphere() {
        this(0);
    }

    @Override
    public double volume() {
        return (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);
    }

    @Override
    public double surfaceArea() {
        return 4 * Math.PI * Math.pow(radius, 2);
    }

    @Override
    public String getInfo() {
        return "Sphere{" +
                "radius=" + radius +
                ", volume=" + volume() +
                ", area=" + surfaceArea() +
                '}';
    }
}
