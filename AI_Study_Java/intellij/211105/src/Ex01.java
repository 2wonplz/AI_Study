public class Ex01 {

    public static void main(String[] args) {

        String a = new String("abcdefg");
        String b = "abcdefghi";

        System.out.println(a);
        System.out.println(a.length());

        System.out.println(b);
        System.out.println(b.length());

        showString("abcdefghijk");

    }

    public static void showString(String c) {

        System.out.println(c);
        System.out.println(c.length());
        System.out.println();

    }

}
