public class Transform2D {
    // Scales the polygon by the factor alpha.
    public static void scale(double[] x, double[] y, double alpha) {
        for (int i = 0; i < x.length; ++i) {
            x[i] *= alpha;
            y[i] *= alpha;
        }
    }

    // Translates the polygon by (dx, dy).
    public static void translate(double[] x, double[] y, double dx, double dy) {
        for (int i = 0; i < x.length; ++i) {
            x[i] += dx;
            y[i] += dy;
        }
    }

    // Returns a new array object that is an exact copy of the given array.
    // The given array is not mutated.
    public static double[] copy(double[] array) {
        double[] copyArray = new double[array.length];
        for (int i = 0; i < array.length; ++i) {
            copyArray[i] = array[i];
        }
        return copyArray;
    }

    // Rotates the polygon theta degrees counterclockwise, about the origin.
    public static void rotate(double[] x, double[] y, double theta) {
        double beta = Math.toRadians(theta);
        double[] copyX = copy(x);
        double[] copyY = copy(y);
        for (int i = 0; i < x.length; ++i) {
            x[i] = copyX[i] * Math.cos(beta) - copyY[i] * Math.sin(beta);
            y[i] = copyY[i] * Math.cos(beta) + copyX[i] * Math.sin(beta);
        }
    }

    public static void testCopy() {
        // Set the x- and y-scale
        StdDraw.setScale(-5.0, 5.0);

        // Original polygon
        double[] x = { 0, 1, 1, 0 };
        double[] y = { 0, 0, 2, 1 };

        // Copy of original polygon
        double[] cx = Transform2D.copy(x);
        double[] cy = Transform2D.copy(y);

        // Rotate, translate and draw the copy
        Transform2D.rotate(cx, cy, -45.0);
        Transform2D.translate(cx, cy, 1.0, 2.0);
        StdDraw.setPenColor(StdDraw.BLUE);
        StdDraw.polygon(cx, cy);
        // Draw the original polygon
        StdDraw.setPenColor(StdDraw.RED);
        StdDraw.polygon(x, y);
    }

    public static void testScale() {
        StdDraw.setScale(-5.0, +5.0);
        double[] x = { 0, 1, 1, 0 };
        double[] y = { 0, 0, 2, 1 };

        StdDraw.setPenColor(StdDraw.RED);
        StdDraw.polygon(x, y);

        scale(x, y, 2.0);

        StdDraw.setPenColor(StdDraw.BLUE);
        StdDraw.polygon(x, y);
    }

    public static void testTranslate() {
        StdDraw.setScale(-5.0, +5.0);
        double[] x = { 0, 1, 1, 0 };
        double[] y = { 0, 0, 2, 1 };

        StdDraw.setPenColor(StdDraw.RED);
        StdDraw.polygon(x, y);

        translate(x, y, 2.0, 1.0);

        StdDraw.setPenColor(StdDraw.BLUE);
        StdDraw.polygon(x, y);
    }

    public static void testRotate() {
        StdDraw.setScale(-5.0, +5.0);
        double[] x = { 0, 1, 1, 0 };
        double[] y = { 0, 0, 2, 1 };

        StdDraw.setPenColor(StdDraw.RED);
        StdDraw.polygon(x, y);

        rotate(x, y, 45.0);

        StdDraw.setPenColor(StdDraw.BLUE);
        StdDraw.polygon(x, y);
    }

    // Tests each of the API methods by directly calling them.
    public static void main(String[] args) {
        // testCopy();
        // testScale();
        // testTranslate();
        testRotate();


        // StdDraw.setScale(-5.0, +5.0);
        // double[] x = { 1, 2, 2, 1 };
        // double[] y = { 1, 1, 3, 2 };
        // StdDraw.setPenColor(StdDraw.RED);
        // StdDraw.polygon(x, y);
        //
        // // Rotate polygon
        // // 90 degrees counterclockwise
        // Transform2D.rotate(x, y, 90.0);
        // StdDraw.setPenColor(StdDraw.BLUE);
        // StdDraw.polygon(x, y);

    }
}
