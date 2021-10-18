package aa;

public class BB {

	public void doA(int n) {

//		int n = 3;

		switch (n) {
		case 1:
			System.out.println("11111");
			break;
		case 2:
			System.out.println("22222");
			break;
		case 3:
			System.out.println("33333");
			break;
		case 4:
			System.out.println("44444");
			break;
		default:
			System.out.println("default..");
			break;
		}

	}
	
	public void doB() {
		
		int n = 0;
		
		while (n < 5) {
			System.out.println("n = " + n);
			n++;  //  ==  n += 1;
		}
		
	}
	
	public void doC() {
		
		System.out.println("doC ½ÃÀÛ");
		for (int n = 0; n < 5; n++)
			System.out.println("n = " + n);
		
	}

}
