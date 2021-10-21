
public class CompAssignOp {

	public static void main(String[] args) {

		int a = 10;
		int b = 20;
		
		a = a + b;
		System.out.println("a = " + a);
		a += b;
		System.out.println("a = " + a);
		
		int rate = 3;
		double double_rate = 3 * 3.5;
		
		rate = (int) (3 * 3.5);
		
		System.out.println("rate = " + rate);
		System.out.println("double_rate = " + double_rate);
		
	}

}
