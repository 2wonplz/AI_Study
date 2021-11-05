package exam;

import java.util.Scanner;

public class ex3 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.println("1.더하기  2.뺴기  3.곱하기  4.나누기  5.나머지  6.종료");
            System.out.print("무엇을 하시겠습니까? >> ");
            int i = sc.nextInt();

            if (i == 6) {
                System.out.println("종료합니다.");
                break;
            }

            System.out.print("첫번째 수 >>> ");
            int n1 = sc.nextInt();
            System.out.print("두번째 수 >>> ");
            int n2 = sc.nextInt();

            if (i == 1)
                System.out.println(n1 + " + " + n2 + " = " + (n1 + n2));
            else if (i == 2)
                System.out.println(n1 + " - " + n2 + " = " + (n1 - n2));
            else if (i == 3)
                System.out.println(n1 + " × " + n2 + " = " + (n1 * n2));
            else if (i == 4)
                System.out.println(n1 + " ÷ " + n2 + " = " + (n1 / n2));
            else if (i == 5)
                System.out.println(n1 + " % " + n2 + " = " + (n1 % n2));

            System.out.println();

        }
    }

}
