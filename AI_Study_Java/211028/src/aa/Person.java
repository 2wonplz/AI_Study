package aa;


public class Person {

	private String name;
	private double height;
	private double weight;
	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public double getHeight() {
		return height;
	}

	public void setHeight(double height) {
		this.height = height;
	}

	public double getWeight() {
		return weight;
	}

	public void setWeight(double weight) {
		if (weight < 0)
			return;
		this.weight = weight;
	}

	public Person() {
		
		System.out.println("기본생성자");
		
	}
	
	public void doPrint() {
		
		System.out.println("이름 : " + name);
		System.out.println("키 : " + height);
		System.out.println("몸무게 : " + weight);
		
	}
	
}
