
public class Ex {

	public static void main(String[] args) {
		
//		6.1.1
		div(10, 3);
		
		
//		6.1.2
		absol(8, 5);
		absol(4, 9);
		
		
//		6.2.1
		double r = 4.8;
		
		System.out.println("���� �ѷ� : " + per(r));
		System.out.println("���� ���� : " + area(r));
		
		
//		6.2.2
		for (int i = 1; i <= 100; i++) {
			if (PN(i) == true)
				System.out.println(i + "��(��) �Ҽ��Դϴ�.");
		}
		

	}
	
	
	public static void div(int a, int b) {
		
		System.out.println(a + " + " + b + " = " + (a + b));
		System.out.println(a + " - " + b + " = " + (a - b));
		System.out.println(a + " �� " + b + " = " + (a * b));
		System.out.println(a + " �� " + b + " = " + (a / b) + ", " + (a % b));
		
	}
	
	public static void absol(int a, int b) {
		
		if (a > b)
			System.out.println("�� ���� ���� ������ " + (a - b) + "�Դϴ�.");
		else
			System.out.println("�� ���� ���� ������ " + (-1 * (a - b)) + "�Դϴ�.");
		
	}
	
	public static double per(double r) {
		
		double pi = 3.14;
		
		return 2 * pi * r;
		
	}
	
	public static double area(double r) {
		
		double pi = 3.14;
		
		return pi * r * r;
		
	}
	
	public static boolean PN(int n) {
		
		
		if (n == 1)
			return false;
		else if (n == 2 || n == 3 || n == 5 || n == 7)
			return true;
		else if (n % 2 == 0)
			return false;
		else if (n % 3 == 0)
			return false;
		else if (n % 5 == 0)
			return false;
		else if (n % 7 == 0)
			return false;
		else
			return true;
		
	}

}
