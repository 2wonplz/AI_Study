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
		
		System.out.print("��ǥ�� : ");
		p.showPointInfo();
		System.out.println("������ : " + r);
		
	}

}
