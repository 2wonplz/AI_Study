import java.util.Scanner;
import aa.DD;

public class GUGUDAN {

	public static void main(String[] args) {

//		숫자를 입력받아 해당되는 구구단 출력
		System.out.println("단 입력 : ");
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();

		DD d1 = new DD();
		d1.doA(n);

	}

}
