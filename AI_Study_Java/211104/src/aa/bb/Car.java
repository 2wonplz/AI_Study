package aa.bb;

public class Car {

	public static int cnt;
	private String name;
	private double dis;

	public Car() {
		cnt++;
	}

	public Car(String name, double dis) {
		this.name = name;
		this.dis = dis;
		cnt++;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setDis(double dis) {
		this.dis = dis;
	}

	public void doPrint() {
		System.out.println("name = " + name);
		System.out.println("dis = " + dis);
		System.out.println(cnt + "번째로 만들어졌습니다.");
	}

}
