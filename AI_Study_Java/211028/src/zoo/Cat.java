package zoo;

class Duck {}

public class Cat {
	
	public Cat() {}

	public void makeDuck() {
		
		Duck duck = new Duck();
		System.out.println("makeDuck");
		
	}
	
	public void a() {
		
		System.out.println("cat.a");
		
	}
	
	void b() {
		
		System.out.println("cat.b");
		
	}
	
}
