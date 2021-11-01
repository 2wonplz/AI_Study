class BBB {
	
	public static void doA() {
		System.out.println("doA");
	}
	
	public void doB() {
		System.out.println("doB");
	}
	
}


public class ClassInstance {

	public static void main(String[] args) {
		
		BBB.doA();
//		BBB b1 = new BBB();
		
	}

}
