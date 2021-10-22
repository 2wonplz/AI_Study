import aa.BankAccount;

public class StringBank {

	public static void main(String[] args) {

		BankAccount a1 = new BankAccount();
		a1.init("1111", "2222", 1000);
		
		BankAccount a2 = new BankAccount();
		a2.init("3333", "4444", 2000);
		
		a1.checkMyBal();
		a2.checkMyBal();
		
	}

}
