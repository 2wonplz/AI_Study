import java.util.Arrays;

public class Ex08 {

    public static void main(String[] args) {

        double[] arOrg = {1.1, 2.2, 3.3, 4.4, 5.5};

//        double[] arrcpy1 = arOrg;
        double[] arrcpy1 = Arrays.copyOf(arOrg, 4);

        if (arOrg == arrcpy1)
            System.out.println("== : 같다");
        else
            System.out.println("== : 다르다");

        if (Arrays.equals(arOrg, arrcpy1))
            System.out.println("equals : 같다");
        else
            System.out.println("equals : 다르다");

        arrcpy1[0] = 3.3;

        for (double elem : arOrg) {
            System.out.print(elem + " ");
        }
        System.out.println();

        for (double elem : arrcpy1) {
            System.out.print(elem + " ");
        }
        System.out.println();

    }

}
