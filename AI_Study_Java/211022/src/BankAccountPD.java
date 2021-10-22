
public class BankAccountPD {
	
	public static int bal = 0;
	
	public static void main(String[] args) {

		deposit(10000);
		checkMyBal();
		withdraw(3000);
		checkMyBal();
		
	}
	
	public static int deposit(int n) {
		
		bal += n;
		return bal;
		
	}
	
	public static int withdraw(int n) {
		
		bal -= n;
		return bal;
		
	}
	
	public static int checkMyBal() {
		
		System.out.println("ภÜพื : " + bal);
		return bal;
		
	}

}
