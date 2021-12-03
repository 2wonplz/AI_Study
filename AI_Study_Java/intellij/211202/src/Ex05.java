import java.lang.reflect.Field;

public class Ex05 {

    @MyAnnnotation
    String s1 = "first";

    @MyAnnnotation(value = "Hello", num = 20)
    String s2 = "second";

    public static void main(String[] args) {

        Ex05 ex05 = new Ex05();
        Field[] fields = ex05.getClass().getDeclaredFields();

        for (Field e : fields) {
            System.out.println(e);
            MyAnnnotation ma = e.getAnnotation(MyAnnnotation.class);
            System.out.println(ma.num());
            System.out.println(ma.value());
            System.out.println();
        }

    }

}
