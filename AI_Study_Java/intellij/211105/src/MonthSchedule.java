import java.util.Scanner;

public class MonthSchedule {

    public static void main(String[] args) {

        Day days[] = new Day[30];
        int index = 0;
        Scanner scan = new Scanner(System.in);

        System.out.println("이번달 스케쥴 관리 프로그램.");
        while (true) {
            System.out.print("할일(입력:1, 보기:2, 끝내기:3) >> ");

            int so1 = scan.nextInt();

            if (so1 == 1) {
                System.out.print("날짜(1~30)? ");
                int so2 = scan.nextInt();

                days[so2 - 1] = new Day();
                System.out.print("할일(빈칸없이입력)? ");
                String so3 = scan.nextLine();
                days[so2 - 1].setWork(so3);
                System.out.println();
            } else if (so1 == 2) {
                for (int i = 0; i < days.length; i++)
                    System.out.println(days[i]);
            } else if (so1 == 3) {
                System.out.println("종료합니다.");
                break;
            }
        }

    }

}
