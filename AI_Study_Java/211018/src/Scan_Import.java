import java.util.Scanner;
import aa.AA;

public class Scan_Import {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		System.out.println("숫자 입력 : ");
		int a = scan.nextInt();
		System.out.println("a = " + a);
		
		AA a1 = new AA();
		a1.doA();
		
	}

}
