public class URLExample {

    public static void check() {
        while (!StdIn.isEmpty()) {
            String s = StdIn.readString();
            if (s.startsWith("http://") && s.endsWith(".edu"))
                StdOut.println(s);
        }
    }

    public static void main(String[] args) {
        check();
    }
}
