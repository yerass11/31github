public class StringEx {
    public static void main(String[] args) {
        String s = "apple";
        String t = "apple";
        System.out.println(s == t);
        t += "apple";
        System.out.println(s);
        System.out.println(t);
        System.out.println(s == t);
    }
}
