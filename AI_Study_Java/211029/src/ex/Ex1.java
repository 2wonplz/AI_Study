package ex;

class TV {
	
	public String name;
	public int year;
	public int inch;	
	
	public TV (String a, int b, int c) {
		
		name = a;
		year = b;
		inch = c;
		
	}
	
	public void show() {
		
		System.out.println(name + "에서 만든 " + year + "년형 " + inch + "인치 TV");
		
	}
	
}

public class Ex1 {

	public static void main(String[] args) {

		TV myTV = new TV("LG", 2017, 32);
		myTV.show();
		
	}

}
