package exam;

import java.util.Arrays;
import java.util.Scanner;

class Phone {

    public String name;
    public String tel;

    public Phone() {}

    public Phone(String name, String tel) {
        this.name = name;
        this.tel = tel;
    }

}

public class PhoneBook {

    public static void main(String[] args) {

        int n;
        String name, tel;

        Scanner sc = new Scanner(System.in);
        System.out.print("인원수 >> ");
        n = sc.nextInt();
        Phone[] p = new Phone[n];

        for (int i = 0; i < n; i++)
            p[i] = new Phone();

        for (int i = 0; i < n; i++) {
            System.out.print("이름과 전화번호(이름과 번호는 빈 칸없이 입력) >> ");
            name = sc.next();
            p[i].name = name;
            tel = sc.next();
            p[i].tel = tel;
        }

        System.out.println("저장되었습니다...");

        while(true) {
            System.out.print("검색할 이름 >> ");
            String search = sc.next();

//            for (int i = 0; i < p.length; i++) {
//                if (search.equals(p[i].name))
//                    System.out.println(p[i].name + "의 번호는 " + p[i].tel + " 입니다.");
//            }

            for (Phone e : p) {
                if (search.equals(e.name))
                    System.out.println(e.name + "의 번호는 " + e.tel + " 입니다.");
            }

            if(search.equals("그만"))
                break;

        }

    }


}