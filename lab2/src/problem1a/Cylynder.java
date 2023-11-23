package problem1a;

class Cylinder extends Shapes {
    private double radius;
    private double height;

    public Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    public Cylinder() {
    }

    @Override
    public double volume(){
        return height * Math.PI * radius * radius;
    }

    @Override
    public double surfaceArea(){
        return 2 * Math.PI * radius * radius + height * 2 * Math.PI * radius;
    }

    @Override
    public String getInfo() {
        return "Cylinder{" +
                "radius=" + radius +
                ", height=" + height +
                ", volume=" + volume() +
                ", area=" + surfaceArea() +
                '}';
    }


}
 