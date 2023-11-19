public class Art {
    private static void draw(int n, double cx, double cy, double rad) {
        if (n == 0) return;
        int red1 = (int) (Math.random() * 256);
        int green1 = (int) (Math.random() * 256);
        int blue1 = (int) (Math.random() * 256);

        StdDraw.setPenColor(red1, green1, blue1);
        StdDraw.filledCircle(cx, cy, rad); // big one
        StdDraw.filledCircle(cx, cy, rad / 3); // center
        StdDraw.filledCircle(cx, cy + rad * 2 / 3, rad / 3); // upper center - 1
        StdDraw.filledCircle(cx, cy - rad * 2 / 3, rad / 3); // down center - 4
        StdDraw.filledCircle(cx + rad * 1.73 / 3, cy + rad / 3, rad / 3); // right up - 2
        StdDraw.filledCircle(cx + rad * 1.73 / 3, cy - rad / 3, rad / 3); // right down - 3
        StdDraw.filledCircle(cx - rad * 1.73 / 3, cy + rad / 3, rad / 3); // left up - 6
        StdDraw.filledCircle(cx - rad * 1.73 / 3, cy - rad / 3, rad / 3); // left down - 5

        int red2 = (int) (Math.random() * 256);
        int green2 = (int) (Math.random() * 256);
        int blue2 = (int) (Math.random() * 256);

        StdDraw.setPenColor(red2, green2, blue2);

        StdDraw.filledCircle(cx + rad * 3.45 / 9, cy, rad / 20); // small right center - 8
        StdDraw.filledCircle(cx - rad * 3.45 / 9, cy, rad / 20); // small left center - 11
        StdDraw.filledCircle(cx + rad * 1.75 / 9, cy + rad / 3, rad / 20); // small right up - 7
        StdDraw.filledCircle(cx - rad * 1.75 / 9, cy + rad / 3, rad / 20); // small left up - 12
        StdDraw.filledCircle(cx + rad * 1.75 / 9, cy - rad / 3, rad / 20); // small right down - 9
        StdDraw.filledCircle(cx - rad * 1.75 / 9, cy - rad / 3, rad / 20); // small left down - 10

        int red3 = (int) (Math.random() * 256);
        int green3 = (int) (Math.random() * 256);
        int blue3 = (int) (Math.random() * 256);

        StdDraw.setPenColor(red3, green3, blue3);

        StdDraw.line(cx, cy - rad, cx, cy + rad); // vertical line
        StdDraw.line(cx, cy, cx + rad * 1.73 / 3, cy + rad * 2 / 3); // from center to right up
        StdDraw.line(cx, cy, cx + rad * 1.73 / 3, cy - rad * 2 / 3); // from center to right down
        StdDraw.line(cx, cy, cx - rad * 1.73 / 3, cy + rad * 2 / 3); // from center to left up
        StdDraw.line(cx, cy, cx - rad * 1.73 / 3, cy - rad * 2 / 3); // from center to left down

        draw(n - 1, cx, cy, rad / 3);
        draw(n - 1, cx, cy + rad * 2 / 3, rad / 3);
        draw(n - 1, cx, cy - rad * 2 / 3, rad / 3);
        draw(n - 1, cx + rad * 1.73 / 3, cy + rad / 3, rad / 3);
        draw(n - 1, cx + rad * 1.73 / 3, cy - rad / 3, rad / 3);
        draw(n - 1, cx - rad * 1.73 / 3, cy + rad / 3, rad / 3);
        draw(n - 1, cx - rad * 1.73 / 3, cy - rad / 3, rad / 3);
    }

    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        // StdDraw.setPenColor(Color.gray);
        // StdDraw.filledSquare(0.5, 0.5, 0.5);

        draw(n, 0.5, 0.5, 0.5);
    }
}
