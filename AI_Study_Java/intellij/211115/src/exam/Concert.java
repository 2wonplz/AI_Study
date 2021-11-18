package exam;

import java.util.Scanner;

class S {
    String name = "___";

    public S(String name) {
        this.name = name;
    }
}

class A {
    String name = "___";

    public A(String name) {
        this.name = name;
    }
}

class R {
    String name = "___";

    public R(String name) {
        this.name = name;
    }
}

public class Concert {

    S[] s = new S[10];
    A[] a = new A[10];
    R[] r = new R[10];

    void resev() {
        Scanner scan = new Scanner(System.in);

        while (true) {
            System.out.print("좌석구분 S(1), A(2), B(3) >> ");
            int re = scan.nextInt();

            if (re == 1) {
                System.out.print("S >> ");
                for (int i = 0; i < s.length; i++)
                    System.out.print(s[i].name + " ");
                System.out.println();
                System.out.print("이름 >> ");
                String name = scan.nextLine();
                System.out.print("번호 >> ");
                re = scan.nextInt();
                s[re - 1].name = name;
            } else if (re == 2) {
                System.out.print("A >> ");
                for (int i = 0; i < a.length; i++)
                    System.out.print(a[i].name + " ");
            } else if (re == 3) {
                System.out.print("R >> ");
                for (int i = 0; i < r.length; i++)
                    System.out.print(r[i].name + " ");
            } else {
                System.out.print("잘못된 좌석구분입니다. 다시 입력하세요.");
                continue;
            }
//            System.out.println();
//            System.out.print("이름 >> ");
//            String name = scan.nextLine();
//            System.out.print("번호 >> ");
//            re = scan.nextInt();

        }
    }

    Concert() {
        Scanner sc = new Scanner(System.in);
        System.out.println("명품콘서트홀 예약 시스템입니다.");
        while (true) {
            System.out.print("예약:1, 조회:2, 취소:3, 끝내기:4 >> ");
            int ch = sc.nextInt();

            if (ch == 1)
                resev();


        }
    }

    public static void main(String[] args) {

        new Concert();

    }

}
