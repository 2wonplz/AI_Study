package ex;

public class Circle {
	
	public int x, y, r;
	Point p = new Point(x, y);
	
	public Circle(int a, int b, int c) {
		
		p.xPos = a;
		p.yPos = b;
		r = c;
		
	}
	
	public void showCircleInfo() {
		
		System.out.print("좌표값 : ");
		p.showPointInfo();
		System.out.println("반지름 : " + r);
		
	}

}
