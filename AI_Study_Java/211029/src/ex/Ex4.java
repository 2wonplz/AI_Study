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
		
		System.out.println("(" + x + ", " + y + ")에서 크기가 " + width + "×" + height + "인 사각형");
		
	}
	
//	public boolean contains(Rectangle r) {	}		// 보류
	
}

public class Ex4 {

	public static void main(String[] args) {

		Rectangle r = new Rectangle(2, 2, 8, 7);
		Rectangle s = new Rectangle(5, 5, 6, 6);
		Rectangle t = new Rectangle(1, 1, 10, 10);
		
		r.show();
		System.out.println("s의 면적은 " + s.square());
//		if(t.contains(r))
//			System.out.println("t는 r을 포함합니다.");
//		if(t.contains(s))
//			System.out.println("t는 r을 포함합니다.");
		
	}

}
