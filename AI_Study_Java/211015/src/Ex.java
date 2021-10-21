
public class Ex {

	public static void main(String[] args) {
		
//		문제 3
		System.out.println(((25 * 5) + (36 - 4) - 72) / 5);
		
//		문제 4
		int a = 3 + 6;
		
		System.out.println(a);
		a += 9;
		System.out.println(a);
		a += 12;
		System.out.println(a);
		
//		문제 5
		int n1 = ((25 + 5) + (36 / 4) - 72) * 5;
		int n2 = ((25 * 5) + (36 - 4) + 71) / 4;
		int n3 = (128 / 4) * 2;
		boolean result;
		
		result = (n1 > n2) && (n2 > n3);
		System.out.println(result);
		
	}
	
}
