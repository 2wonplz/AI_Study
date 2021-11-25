import java.util.StringTokenizer;

public class Ex07 {

    public static void main(String[] args) {

        StringTokenizer st1 = new StringTokenizer("PM:08:45", ":");

        while (st1.hasMoreTokens())
            System.out.print(st1.nextToken() + ' ');
        System.out.println();

        String susic = "1 + 3 + 4 / 5 + 10 / 2";
        String yon = "+-/= ";
        StringTokenizer st2 = new StringTokenizer(susic, yon);

        while (st2.hasMoreTokens())
            System.out.print(st2.nextToken() + ' ');
        System.out.println();

    }

}
