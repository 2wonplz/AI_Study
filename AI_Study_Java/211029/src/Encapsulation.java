
public class Encapsulation {

	public static void main(String[] args) {
		
		A a = new A();
		B b = new B();
		
		ABC abc = new ABC();
		abc.takeA(a);
		abc.takeB(b);
		abc.takeC(new C());
		
		abc.seqtakeABC(new A(), new B(), new C());
		
	}

}
