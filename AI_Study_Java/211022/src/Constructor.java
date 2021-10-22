import aa.BankAccount;

public class Constructor {

	public static void main(String[] args) {
		
		BankAccount a1 = new BankAccount("1111", "2222", 10000);
		BankAccount a2 = new BankAccount("1111", "2222", 10000);

		a1.checkMyBal();
		a2.checkMyBal();
		
	}

}
