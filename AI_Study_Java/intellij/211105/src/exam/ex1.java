package exam;

import java.util.Scanner;

public class ex1 {

    public static void main(String[] args) {

        String name, fn, ln;
        String[] cutname;
        Scanner scan = new Scanner(System.in);
        System.out.print("이름을 성과 이름을 띄워서 영어로 입력 >> ");
        name = scan.nextLine();

        cutname = name.split(" ");
        ln = cutname[0];
        fn = cutname[1];

        System.out.println("성 " + ln);
        System.out.println("이름 " + fn);

    }

}
