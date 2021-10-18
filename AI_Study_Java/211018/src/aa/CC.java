package aa;

public class CC {

	// break
	public void doA() {

		System.out.println("doA 시작");
		for (int i = 0; i < 5; i++) {
			if (i == 3)
				break;
			System.out.println("i = " + i);
		}

	}

	// continue
	public void doB() {

		System.out.println("doB 시작");
		for (int i = 0; i < 5; i++) {
			if (i == 3)
				continue;
			System.out.println("i = " + i);
		}

	}

	public void doC(int a, int b) {
		
		int n = 0;
		int count = 0;
		
		while (n++ < 100) {
			if (n % a == 0 && n % b == 0) {
				count++;
				if (count == 3)
					continue;
				else
					System.out.println("n = " + n);
			}
		}
		
	}
	
}
