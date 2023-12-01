public class Rectangle {
    private final int x1, y1, x3, y3;

    public Rectangle(int x1, int y1, int x3, int y3) {
        this.x1 = x1;
        this.y1 = y1;
        this.x3 = x3;
        this.y3 = y3;
    }

    // B   C
    // A   D
    // public String toString() {
    //     return "A: " + this.x1 + ":" + this.y1 + ";\n"
    //             + "B: " + this.x1 + ":" + this.y3 + ";\n"
    //             + "C: " + this.x3 + ":" + this.y3 + ";\n"
    //             + "D: " + this.x3 + ":" + this.y1 + ";\n";
    // }

    public String toString() {
        return "B:" + this.x1 + ":" + this.y3 + "   ----------------   "
                + "C:" + this.x3 + ":" + this.y3 + ";\n\n\n\n\n"
                + "A:" + this.x1 + ":" + this.y1 + "   ----------------   "
                + "D:" + this.x3 + ":" + this.y1 + ";\n";
    }

    public void draw() {

        StdDraw.rectangle((x1 + x3) / 2.0, (y1 + y3) / 2.0, (x3 - x1) / 2.0, (y3 - y1) / 2.0);
    }

    public static void main(String[] args) {
        Rectangle rec = new Rectangle(1, 1, 8, 6);
        System.out.println(rec);

        StdDraw.setScale(0.0, 10.0);
        rec.draw();
    }
}
