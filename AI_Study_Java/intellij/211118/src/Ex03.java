import java.util.InputMismatchException;
import java.util.Scanner;

public class Ex03 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("a = ? >> ");
            int a = sc.nextInt();
            System.out.print("b = ? >> ");
            int b = sc.nextInt();

            System.out.println("a / b = " + (a / b));
            System.out.println("연산완료");
        } catch (ArithmeticException ae) {
            ae.printStackTrace();
            System.out.println("수학적 계산 예외발생");
        } catch (InputMismatchException ime) {
            ime.printStackTrace();
            System.out.println("문자열 삽입 예외발생");
        }
        System.out.println("Bye!");

    }

}
