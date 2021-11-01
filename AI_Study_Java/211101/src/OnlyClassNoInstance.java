class AAA {
	
	public static int AAAA = 1000;
	
}


public class OnlyClassNoInstance {
	
	public static int num = 100;
	public static String a = "aaaa";

	public static void main(String[] args) {

		OnlyClassNoInstance.num -= 10;
		System.out.println("num = " + OnlyClassNoInstance.num);
		System.out.println("a = " + OnlyClassNoInstance.a);
		System.out.println("AAA.AAAA = " + AAA.AAAA);
		
	}

}
