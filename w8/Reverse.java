public class Reverse {

    public static String ReverseStr(String s) {
        int n = s.length() - 1;
        String t = "";
        for (int i = n; i >= 0; --i) {
            t += s.charAt(i);
        }
        return t;
    }

    public static boolean isPalindrome(String s) {
        String t = ReverseStr(s);
        return (s.equals(t));
    }

    public static void main(String[] args) {
        System.out.println(ReverseStr("asdfgh"));
        System.out.println(isPalindrome("qazaq"));
        System.out.println(isPalindrome("asdfg"));
    }
}
