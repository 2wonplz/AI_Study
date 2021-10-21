import aa.AA;

public class If {

	public static void main(String[] args) {

		int n1 = 5;
		int n2 = 7;
		
		if (n1 > n2)
			System.out.println("n1 > n2 is true");
		
		if (n1 == n2)
			System.out.println("n1 == n2 is true");
		else
			System.out.println("n1 == n2 is false");
		
		AA a1 = new AA();
		a1.doB(100);
		a1.doB(51);
		a1.doB(-100);
		
	}

}
