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

		System.out.println("���¹�ȣ : " + accNumber);
		System.out.println("�ֹε�Ϲ�ȣ : " + ssNumber);
		System.out.println("�ݾ� : " + bal);

	}

	public void init(String acc, String ss, int b) {

		accNumber = acc;
		ssNumber = ss;
		bal = b;

	}

}
