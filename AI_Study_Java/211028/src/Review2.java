import aa.AA;

public class Review2 {

	public static void main(String[] args) {
		
		int num1ary[] = new int[3];
		String nameary[] = new String[3];
		
		AA aarray[] = new AA[3];
		
		for (int i = 0; i < 3; i++) {
			aarray[i] = new AA((i + 1) * 10, "a" + i);
			System.out.println("aarray[" + i + "] = " + aarray[i]);
			aarray[i].doPrint();
		}
		
	}

}
