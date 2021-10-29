class MyCls {
	
	public void doA() {
		
		StCls st4 = new StCls();
		st4.print();
		
	}
	
}

public class StCls {

	int a = 10;
	static int b = 20;
	
	StCls() {
		
		a++;
		b++;
		
	}
	
	public void print() {
		
		System.out.println("a = " + a);
		System.out.println("b = " + b);
		System.out.println();
		
	}
	
}
