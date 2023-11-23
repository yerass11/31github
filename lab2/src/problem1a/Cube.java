package problem1a;

public class Cube extends Shapes{
    private double length;

    public Cube(double length) {
        this.length = length;
    }

    public Cube() {
    }

    @Override
    public double volume(){
        return surfaceArea()*length;
    }
    @Override
    public double surfaceArea(){
        return length*length;
    }


    @Override
    public String getInfo(){
        return "Cube{" +
                "length=" + length + '\n' +
                "volume=" + volume() + '\n' +
                "surfaceArea=" + surfaceArea() + '\n' +
                '}';
    }

}
