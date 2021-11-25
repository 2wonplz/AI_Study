import java.util.Scanner;

public class Ex04 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("숫자 입력 시 형변환해서 출력 >> ");
        String line = sc.nextLine();

        int myint = Integer.parseInt(line);
        System.out.println(myint);

        String myintS = Integer.toString(myint);
        System.out.println("String 형 = " + myintS);

    }

}
