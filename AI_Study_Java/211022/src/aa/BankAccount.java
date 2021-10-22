package aa;

public class BankAccount {

	public int bal = 0;
	public String accNumber;
	public String ssNumber;
	
	public BankAccount() {}
	
	public BankAccount(String acc, String ss, int b) {

		accNumber = acc;
		ssNumber = ss;
		bal = b;

	}

	public void deposit(int n) {

		bal += n;

	}

	public void checkMyBal() {

		System.out.println("계좌번호 : " + accNumber);
		System.out.println("주민등록번호 : " + ssNumber);
		System.out.println("금액 : " + bal);

	}

	public void init(String acc, String ss, int b) {

		accNumber = acc;
		ssNumber = ss;
		bal = b;

	}

}
