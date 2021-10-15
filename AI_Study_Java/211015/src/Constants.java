// 클래스명은 대문자로 시작하는게 관례
// 패키지명은 마음대로
// 패키지가 선언되어 있지 않으면 src폴더안에 바로 (defaulf package)

public class Constants {

	public static void main(String[] args) {
		
		int MIN_SIZE = 10;
		final int MAX_SIZE = 100;
		
		System.out.println("MAX_SIZE = " + MAX_SIZE);
		System.out.println("MIN_SIZE = " + MIN_SIZE);
		MIN_SIZE = 20;  //  변경 가능
		System.out.println("MIN_SIZE = " + MIN_SIZE);
//		MAX_SIZE = 200;     변경 불가
		
	}

}
