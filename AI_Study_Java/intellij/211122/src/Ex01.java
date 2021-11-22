import java.util.Scanner;

class Seat {
    String line;
    String r_name;

    public Seat(String line, String r_name) {
        this.line = line;
        this.r_name = r_name;
    }
}

public class Ex01 {

    Ex01() {
        Seat[] seats = new Seat[30];
        for (int i = 0; i < seats.length; i++) {
            if (i < 11)
                seats[i] = new Seat("S", "_");
            else if (i < 21)
                seats[i] = new Seat("A", "_");
            else
                seats[i] = new Seat("B", "_");
        }

        Scanner sc = new Scanner(System.in);
        System.out.println("명품콘서트홀 예약 시스템입니다.");

        while (true) {
            System.out.print("예약:1, 조회:2, 취소:3, 끝내기:4 >> ");
            int select = sc.nextInt();

            if (select == 1) {

                System.out.print("좌석구분 S(1), A(2), B(3) >> ");
                int seatline = sc.nextInt();
                sc.nextLine();
                if (seatline == 1)
                    System.out.print("S >> ");
                else if (seatline == 2) {
                    System.out.print("A >> ");
                } else if (seatline == 3) {
                    System.out.print("B >> ");
                } else {
                    System.out.println("잘못된 좌석입력입니다. 다시 입력하세요.");
                    continue;
                }
                for (int i = (seatline - 1) * 10; i < ((seatline - 1) * 10) + 10; i++) {
                    System.out.print(seats[i].r_name + " ");
                }
                System.out.println();
                System.out.print("이름 >> ");
                String name = sc.nextLine();
                System.out.print("번호 >> ");
                int num = sc.nextInt();
                sc.nextLine();
                num = (seatline - 1) * 10 + (num - 1);
                seats[num].r_name = name;

                System.out.println("<<< 예약을 완료하였습니다. >>>");

            } else if (select == 2) {

                System.out.print("S >> ");
                for (int i = 0; i < 10; i++) {
                    System.out.print(seats[i].r_name + " ");
                }
                System.out.println();
                System.out.print("A >> ");
                for (int i = 10; i < 20; i++) {
                    System.out.print(seats[i].r_name + " ");
                }
                System.out.println();
                System.out.print("B >> ");
                for (int i = 20; i < 30; i++) {
                    System.out.print(seats[i].r_name + " ");
                }
                System.out.println();
                System.out.println("<<< 조회를 완료하였습니다. >>>");

            } else if (select == 3) {

            } else if (select == 4) {

                break;
            }
        }
    }

    public static void main(String[] args) {
        new Ex01();
    }

}
