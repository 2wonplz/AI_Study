/*
 *  4bit -> 8bit -> 32bit -> 64bit
 *  				4byte
 *  int = 4byte
 *  ctrl + 1 = 빠른 에러 처리
 */

public class UnaryAddMin {

	public static void main(String[] args) {
		
		short n1 = 10;
		System.out.println(+n1);
		System.out.println(-n1);
		
		short n2 = 20;
		System.out.println(+n2);
		n2 =  (short) (-n2);
		System.out.println(n2);
		
	}

}
