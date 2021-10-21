
public class MethodDef {

	public static void main(String[] args) {

		System.out.println("프로그램 시작");
		hi(12);
		hi(15);
		System.out.println("프로그램 종료");
		
	}
	
	public static void hi(int age) {
		
		System.out.println("안녕하세요.");
		System.out.println("제 나이는 " + age + "살 입니다." );
		
	}

}
