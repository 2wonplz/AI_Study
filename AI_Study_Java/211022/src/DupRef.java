import aa.BankAccount;

public class DupRef {

	public static void main(String[] args) {

		BankAccount ref1 = new BankAccount();
		BankAccount ref2 = ref1;

		ref1.deposit(1000);
		ref2.checkMyBal();

		ref2.deposit(2000);
		ref1.checkMyBal();

		check(ref1);
		ref1.checkMyBal();

		ref1 = null;
		if (ref1 == null)
			System.out.println("¿¬°á ²÷±è");
		if (ref2 != null)
			System.out.println("ref2´Â ¿¬°áÁß");

	}

	public static void check(BankAccount acc) {

		acc.bal = 5000;

	}

}
