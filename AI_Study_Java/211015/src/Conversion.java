
public class Conversion {

	public static void main(String[] args) {

//		Implicit Conversion : ������ �� ��ȯ (�ڵ� �� ��ȯ)
		int num1 = 100;
		long num2 = 3147483647L;
		System.out.println(num1 + num2);
		
//		Explicit Conversion : ����� �� ��ȯ
		int num3 = (int) (num1 + num2);
		long num4 = num1 + num2;
		System.out.println("num3 = " + num3);
		System.out.println("num4 = " + num4);
		
	}

}
