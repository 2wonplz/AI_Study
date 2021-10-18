package aa;

public class AA {
	
	public void doA() {
		
		System.out.println("doA 함수입니다.");
		
	}
	
	public void doB(int p1) {
		
		if (p1 < 0)
			System.out.println(p1 + "은(는) 0보다 작습니다.");
		else if (p1 < 100)
			System.out.println(p1 + "은(는) 100보다 작습니다.");
		else
			System.out.println(p1 + "은(는) 100 이상입니다.");
		
	}
	
	public void doC(int n1, int n2) {
		
		int result = n1 > n2 ? n1 - n2 : n2 - n1;
		System.out.println("result = " + result);
		
	}

}
