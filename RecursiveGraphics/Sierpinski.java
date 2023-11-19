import java.awt.Color;

public class Sierpinski {
    //  Height of an equilateral triangle whose sides are of the specified length.
    public static double height(double length) {
        double h = length * (Math.sqrt(3.0) / 2.0);
        return h;
    }

    //  Draws a filled equilateral triangle whose bottom vertex is (x, y)
    //  of the specified side length.
    public static void filledTriangle(double x, double y, double length) {
        // x - l/ 2, y + h    x + l / 2, y + h
        // -------
        //  -----
        //   ---
        //    -
        //   x,y
        double h = height(length);
        StdDraw.setPenColor(Color.red);
        StdDraw.filledPolygon(new double[] { x, x - (length / 2), x + (length / 2) },
                              new double[] { y, y + h, y + h });
    }

    //  Draws a Sierpinski triangle of order n, such that the largest filled
    //  triangle has bottom vertex (x, y) and sides of the specified length.
    public static void sierpinski(int n, double x, double y, double length) {
        if (n > 0) {
            filledTriangle(x, y, length);
            double h = height(length);

            // top point
            sierpinski(n - 1, x, y + h, length / 2);

            // bottom right point
            sierpinski(n - 1, x + (length / 2), y, length / 2);

            // bottom left point
            sierpinski(n - 1, x - (length / 2), y, length / 2);
        }

    }

    //  Takes an integer command-line argument n;
    //  draws the outline of an equilateral triangle (pointed upwards) of length 1;
    //  whose bottom-left vertex is (0, 0) and bottom-right vertex is (1, 0); and
    //  draws a Sierpinski triangle of order n that fits snugly inside the outline.
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        double h = height(1);
        StdDraw.setPenColor(Color.gray);
        StdDraw.polygon(new double[] { 0, 0.5, 1 }, new double[] { 0, h, 0 });

        sierpinski(n, .5, 0.0, 0.5);
    }
}

