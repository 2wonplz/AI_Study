
public class ReculFactorial {

	public static void main(String[] args) {
		
		System.out.println("3 factorial : " + fact(3));
		System.out.println("12 factorial : " + fact(12));
		
	}
	
	public static int fact(int n) {
		
		if (n == 1)
			return 1;
		else
			return n * fact(n - 1);
		
	}

}
