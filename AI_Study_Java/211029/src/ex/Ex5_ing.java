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
			System.out.println("없습니다.");
		else
			System.out.println(work + "입니다.");
		
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
		System.out.println("이번달 스케쥴 관리 프로그램");
		System.out.print("할 일 (입력 : 1, 보기 : 2, 끝내기 : 3) >> ");
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
		
		System.out.println("날짜(1 ~ " + m + ")? >> ");
		day = date.nextInt();
		System.out.println("할일(빈칸없이 입력)? >> ");
		d.set(work);
		
	}
	
	public void view() {
		
		
		
	}
	
	public void finish() {
		
		System.out.println("프로그램을 종료합니다.");
		
	}
		
}

public class Ex5_ing {

	public static void main(String[] args) {
		
		MonthSchedule april = new MonthSchedule(30);
		april.run();

	}

}
