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
		
		System.out.println("�⺻������");
		
	}
	
	public void doPrint() {
		
		System.out.println("�̸� : " + name);
		System.out.println("Ű : " + height);
		System.out.println("������ : " + weight);
		
	}
	
}
