import aa.Triangle;

public class Ex {


	public static void main(String[] arg) {
		
//		6.3.1
		System.out.println(recur2(5));
		
//		6.3.2
//		보류
		
//		7.1
		Triangle t = new Triangle(4.5, 7.0);
		
		t.check();
		
		t.change();
		t.check();
		
		System.out.println("삼각형의 넓이는 " + t.area() + " 입니다.");
		
	}
	
	
	public static int recur2(int n) {
		
		if(n == 1)
			return 2;
		else
			return 2 * recur2(n - 1);
		
	}
	
	public static void bin(int n) {
		
		
		
	}
	
}
