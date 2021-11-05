public class Ex02 {

    public static void main(String[] args) {

        String str1 = "simple String";
        String str2 = "simple String";

        String str3 = new String("simple String");
        String str4 = new String("simple String");

        if (str1 == str2)
            System.out.println("str1 str2 동일한 인스턴스 참조");
        else
            System.out.println("str1 str2 다른 인스턴스 참조");

        if (str3 == str4)
            System.out.println("str3 str4 동일한 인스턴스 참조");
        else
            System.out.println("str3 str4 다른 인스턴스 참조");

    }

}
