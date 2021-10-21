//	같은 패키지내의 클래스를 호출할때는 import X
//	다른 패키지내의 클래스를 호출할때는 import O

import aa.AA;

public class Method2Param {

	public static void main(String[] args) {

		AA a1 = new AA();
		
		System.out.println("시작");
		a1.hi(14, 160.5);
		a1.bye();
		System.out.println("종료");
		
	}

}
