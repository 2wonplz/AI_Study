package aa;

public class AA {
	
	public void doA() {
		
		System.out.println("doA �Լ��Դϴ�.");
		
	}
	
	public void doB(int p1) {
		
		if (p1 < 0)
			System.out.println(p1 + "��(��) 0���� �۽��ϴ�.");
		else if (p1 < 100)
			System.out.println(p1 + "��(��) 100���� �۽��ϴ�.");
		else
			System.out.println(p1 + "��(��) 100 �̻��Դϴ�.");
		
	}
	
	public void doC(int n1, int n2) {
		
		int result = n1 > n2 ? n1 - n2 : n2 - n1;
		System.out.println("result = " + result);
		
	}

}
