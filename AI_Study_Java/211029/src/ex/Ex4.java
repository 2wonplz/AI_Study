package ex;

class Rectangle {
	
	public int x, y, width, height;
	
	public Rectangle(int a, int b, int c, int d) {
		
		x = a;
		y = b;
		width = c;
		height = d;
		
	}
	
	public int square() {
		
		return width * height;
		
	}
	
	public void show() {
		
		System.out.println("(" + x + ", " + y + ")���� ũ�Ⱑ " + width + "��" + height + "�� �簢��");
		
	}
	
//	public boolean contains(Rectangle r) {	}		// ����
	
}

public class Ex4 {

	public static void main(String[] args) {

		Rectangle r = new Rectangle(2, 2, 8, 7);
		Rectangle s = new Rectangle(5, 5, 6, 6);
		Rectangle t = new Rectangle(1, 1, 10, 10);
		
		r.show();
		System.out.println("s�� ������ " + s.square());
//		if(t.contains(r))
//			System.out.println("t�� r�� �����մϴ�.");
//		if(t.contains(s))
//			System.out.println("t�� r�� �����մϴ�.");
		
	}

}
