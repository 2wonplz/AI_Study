package solution;

import java.util.Scanner;

class Phone {
    private String name;
    private String tel;

    public Phone(String name, String tel) {
        this.name = name;
        this.tel = tel;
    }

    public String getName() {
        return name;
    }

    public String getTel() {
        return tel;
    }
}

public class PhoneBook {

    PhoneBook() {
        Scanner sc = new Scanner(System.in);
        System.out.print("인원 수 >> ");
        int arrsize = sc.nextInt();
        Phone[] phone = new Phone[arrsize];
        sc.nextLine();

        for (int i = 0; i < arrsize; i++) {
            System.out.print("이름과 전화번호(이름과 번호는 빈 칸 없이 입력) >> ");
            String temp = sc.nextLine();
            String[] name_tel = temp.split(" ");
            phone[i] = new Phone(name_tel[0], name_tel[1]);
        }
        System.out.println("저장되었습니다...");

        while (true) {
            System.out.println("검색할 이름 >> ");
            String sel = sc.nextLine();
            if (sel.equals("그만"))
                break;

            int check = 0;
            for (Phone temp : phone) {
                check = 1;
                System.out.println(temp.getName() + " " + temp.getTel());
            }

            if (check == 0)
                System.out.println("검색 실패.");
        }
    }

    public static void main(String[] args) {

        new PhoneBook();

    }

}
