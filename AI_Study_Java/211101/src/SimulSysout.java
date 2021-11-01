class C {
	
	public static void doA() {
		System.out.println("static method doA");
	}
	
}

class CS {
	
	public static C cout = new C();
	
}


public class SimulSysout {

	public static void main(String[] args) {
		
		CS.cout.doA();
		
	}

}
