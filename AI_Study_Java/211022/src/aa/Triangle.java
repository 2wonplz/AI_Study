package aa;
import java.util.Scanner;

public class Triangle {

	public double width = 0;
	public double height = 0;
	
	public Triangle(double w, double h) {
		
		width = w;
		height = h;
		
	}
	
	public void check() {
		
		System.out.println("���� �ﰢ���� �غ��� " + width + ", ���̴� " + height + " �Դϴ�.");
		
	}
	
	public void change() {
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("������ �غ� ���� : ");
		double w = scan.nextDouble();
		System.out.println("������ ���� ���� : ");
		double h = scan.nextDouble();
		
		width = w;
		height = h;
		
	}
	
	public double area() {
		
		return (width * height) / 2;
		
	}
	
	
	
}
