public class NBody {
    public static void main(String[] args) {
        // Step 1. Parse command-line arguments.
        double tau = Double.parseDouble(args[0]);
        double dt = Double.parseDouble(args[1]);

        // System.out.println("T = " + tau);
        // System.out.println("dt = " + dt);

        // to run this code, write :
        // javac-introcs NBody.java
        // java-introcs NBody 10 1 < nbody/planets.txt


        // Step 2. Read universe from standard input.
        int n = StdIn.readInt();
        double radius = StdIn.readDouble();

        double[] px = new double[n];
        double[] py = new double[n];
        double[] vx = new double[n];
        double[] vy = new double[n];
        double[] mass = new double[n];
        String[] image = new String[n];

        for (int i = 0; i < n; ++i) {
            px[i] = StdIn.readDouble();
            py[i] = StdIn.readDouble();
            vx[i] = StdIn.readDouble();
            vy[i] = StdIn.readDouble();
            mass[i] = StdIn.readDouble();
            image[i] = StdIn.readString();
        }


        // Step 3. Initialize standard drawing.
        StdDraw.setXscale(-radius, +radius);
        StdDraw.setYscale(-radius, +radius);

        StdDraw.enableDoubleBuffering();


        // Step 4. Play music on standard audio.
        StdAudio.playInBackground("nbody/2001.wav");

        // Step 5. Simulate the universe.


        // Step 5A. Calculate net forces.
        double G = 6.67e-11;


        // Step 5B. Update velocities and positions.
        // Step 5C. Draw universe to standard drawing.
        for (double t = 0; t < tau; t += dt) {

            double[] fx = new double[n];
            double[] fy = new double[n];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i != j) {
                        double dX = px[j] - px[i];
                        double dY = py[j] - py[i];
                        double r = Math.sqrt(dX * dX + dY * dY);


                        double force = (G * mass[i] * mass[j]) / (r * r);

                        double fxComponent = force * (dX / r);
                        double fyComponent = force * (dY / r);


                        fx[i] += fxComponent;
                        fy[i] += fyComponent;
                    }
                }
            }

            StdDraw.picture(0, 0, "nbody/starfield.jpg");
            // StdOut.println("t = " + t);

            for (int i = 0; i < n; ++i) {
                vx[i] = vx[i] + ((fx[i] / mass[i]) * dt);
                vy[i] = vy[i] + ((fy[i] / mass[i]) * dt);
                px[i] = px[i] + (vx[i] * dt);
                py[i] = py[i] + (vy[i] * dt);
                StdDraw.picture(px[i], py[i], "nbody/" + image[i]);
            }

            StdDraw.show();
            // StdDraw.pause(25);
            StdDraw.pause(20);
        }


        // Step 6. Print universe to standard output.
        StdOut.printf("%d\n", n);
        StdOut.printf("%.2e\n", radius);
        for (int i = 0; i < n; i++) {
            StdOut.printf("%11.4e %11.4e %11.4e %11.4e %11.4e %12s\n",
                          px[i], py[i], vx[i], vy[i], mass[i], image[i]);
        }
        // %11.4e  ->
        // 11 -> size of num 11, .4 -> after dot(.) we have 4 digits and e
        // %12s size of string

    }
}
