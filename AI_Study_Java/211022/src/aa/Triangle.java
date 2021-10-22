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
		
		System.out.println("현재 삼각형의 밑변은 " + width + ", 높이는 " + height + " 입니다.");
		
	}
	
	public void change() {
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("변경할 밑변 길이 : ");
		double w = scan.nextDouble();
		System.out.println("변경할 높이 길이 : ");
		double h = scan.nextDouble();
		
		width = w;
		height = h;
		
	}
	
	public double area() {
		
		return (width * height) / 2;
		
	}
	
	
	
}
