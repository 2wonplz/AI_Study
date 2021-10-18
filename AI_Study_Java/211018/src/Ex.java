
public class Ex {

	public static void main(String[] args) {

//		5.1
		int num = 120;
		
		if ((num > 0) && (num % 2 == 0))
			System.out.println("양수이면서 짝수");
		
		
//		5.2
		int num1 = 50;
		int num2 = 100;
		int big, diff;
		
		if (num1 > num2) {
			big = num1;
			System.out.println("큰 수 : " + big);
		} else {
			big = num2;
			System.out.println("큰 수 : " + big);
		}
		
		if (num1 > num2) {
			diff = num1 - num2;
			System.out.println("절댓값 : " + diff);
		} else {
			diff = num2 - num1;
			System.out.println("절댓값 : " + diff);
		}
		
		
//		5.3.1
		int n = 3;
		
		if (n == 1)
			System.out.println("Simple Java");
		else if (n == 2)
			System.out.println("Funny Java");
		else if (n == 3)
			System.out.println("Fantastic Java");
		else
			System.out.println("The best programming language");
		
		System.out.println("Do you like Java?");
		
		
//		5.3.2
		int i = 24;
		int result;
		
		if (i >= 0 && i < 10)
			result = 1;
		else if (i >= 10 && i < 20)
			result = 2;
		else if (i >= 20 && i < 30)
			result = 3;
		else
			result = 4;
		
		switch (result) {
		case 1: 
			System.out.println("0 이상 10 미만의 수");
			break;
		case 2: 
			System.out.println("10 이상 20 미만의 수");
			break;
		case 3: 
			System.out.println("20 이상 30 미만의 수");
			break;
		default:
			System.out.println("음수 혹은 30 이상의 수");
			break;
		}
		
		
//		5.4.1
		int j = 1;
		int sum = 0;
		
		while (j < 100) {
			sum += j;
			j++;
		}
		System.out.println(sum);
		
		
//		5.4.2
		int k = 1;
		
		while (k <= 100) {
			System.out.println(k);
			k++;
		}
		k--;
		do {
			System.out.println(k);
			k--;
		} while (k >= 1);
		
		
	}

}
