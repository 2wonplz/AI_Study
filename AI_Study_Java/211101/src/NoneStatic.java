class A {
	
	int num = 0;
	
	static void addNum(int n) {
//		num += n;
	}
	
}


public class NoneStatic {

	public static void main(String[] args) {
		
		A a = new A();
		a.addNum(10);
		
	}

}
