package exam;

import java.util.Scanner;

import static exam.Dictionary.kor2Eng;

class Dictionary {
    private static String[] kor = {"사랑", "아기", "돈", "미래", "희망"};
    private static String[] eng = {"love", "baby", "money", "future", "hope"};

    public static String kor2Eng(String word) {
        String result = null;
        int check = 0;
        for (int i = 0; i < kor.length; i++) {
            if (word.equals(kor[i])) {
                result = word + "은(는) " + eng[i];
                check = 1;
            }
        }
        if (check == 0)
            result = word + "은(는) 저의 사전에 없습니다.";

        return result;
    }
}

public class DicApp {

    DicApp() {
        Scanner sc = new Scanner(System.in);
        System.out.println("한영 단어 검색 프로그램입니다.");

        while (true) {
            System.out.print("한글 단어? ");
            String word = sc.nextLine();

            if (word.equals("그만"))
                break;
            else
                System.out.println(kor2Eng(word));
        }
    }

    public static void main(String[] args) {

        new DicApp();

    }

}
