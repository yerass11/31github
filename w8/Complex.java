public class Complex {
    private final double a, b;

    public Complex(double a, double b) {
        this.a = a;
        this.b = b;
    }

    public Complex times(Complex c) {
        double newA = this.a * c.a - this.b * c.b;
        double newB = this.a * c.b + this.b * c.a;
        return new Complex(newA, newB);
    }

    public Complex sum(Complex c) {
        double newA = this.a + c.a;
        double newB = this.b + c.b;
        return new Complex(newA, newB);
    }

    public double abs() {
        return Math.abs(this.a * this.a + this.b * this.b);
    }

    public String toString() {
        return this.a + " + " + this.b + "i";
    }


    public static void main(String[] args) {
        Complex c1 = new Complex(1, 1);
        Complex c2 = new Complex(1, 1);
        System.out.println(c1.times(c2));
        System.out.println(c1.sum(c2));

    }
}
