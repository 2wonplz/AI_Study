import aa.BankAccount;

public class Bank {

	public static void main(String[] args) {

		BankAccount a = new BankAccount();
		BankAccount b = new BankAccount();
		
		a.deposit(1000);
		b.deposit(2000);
		
		a.checkMyBal();
		b.checkMyBal();
		
	}

}
