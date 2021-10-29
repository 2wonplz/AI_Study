package ex;

import java.util.Scanner;

class Day {
	
	private String work;
	
	public void set(String work) {
		this.work = work;
	}
	
	public String get() {
		return work;
	}
	
	public void show() {
		
		if(work == null)
			System.out.println("�����ϴ�.");
		else
			System.out.println(work + "�Դϴ�.");
		
	}
	
}

class MonthSchedule {
	
	Day d = new Day();
	
	Scanner date = new Scanner(System.in);
	public int m, num, day;
	public String work;
	
	public MonthSchedule(int n) { m = n; }
	
	public void run() {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("�̹��� ������ ���� ���α׷�");
		System.out.print("�� �� (�Է� : 1, ���� : 2, ������ : 3) >> ");
		num = sc.nextInt();
		
		if(num == 1) {
			input();
			run();
		} else if (num == 2) {
			view();
			run();
		} else
			finish();
		
	}

	public void input() {
		
		System.out.println("��¥(1 ~ " + m + ")? >> ");
		day = date.nextInt();
		System.out.println("����(��ĭ���� �Է�)? >> ");
		d.set(work);
		
	}
	
	public void view() {
		
		
		
	}
	
	public void finish() {
		
		System.out.println("���α׷��� �����մϴ�.");
		
	}
		
}

public class Ex5_ing {

	public static void main(String[] args) {
		
		MonthSchedule april = new MonthSchedule(30);
		april.run();

	}

}
