package aa;

public class Member {

	private String name;
	private int age;
	
	void setName(String name) {

		this.name = name;
	
	}
	
	void setAge(int age) {

		this.age = age;
	
	}

	void print() {
		
		System.out.println("Member Class");
		System.out.println("name : " + name);
		System.out.println("age : " + age);
		
	}
	
}
