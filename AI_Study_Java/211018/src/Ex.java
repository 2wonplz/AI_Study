
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
		
		/*	선생님 풀이
		switch (i / 10) {
		case 0:
			System.out.println("0 이상 10 미만의 수");
		case 1:
			System.out.println("10 이상 20 미만의 수");
		case 2:
			System.out.println("20 이상 30 미만의 수");
		default:
			System.out.println("음수 혹은 30 이상의 수");
		}
		*/
		
		
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
		
		
//		5.4.3
		int l = 1;
		int add = 0;
		
		while (l <= 100) {
			if ((l % 2 == 0) && (l % 7 == 0))
				add += l;
			l++;
		}
		
		System.out.println(add);
		
		
//		5.5.1
		int mul = 1;
		
		for (int n1 = 1; n1 <= 10; n1++)
			mul *= n1;
		System.out.println(mul);
		
		
//		5.5.2
		int dan = 5;
		
		for (int n2 = 1; n2 <= 9; n2++)
			System.out.println(dan + " X " + n2 + " = " + (dan * n2));
		
		
		
//		5.6.1
		int count = 0;
		
		for (int number = 1; number < 100; number++) {
			if (((number % 5) != 0) || ((number % 7) != 0))
				continue;
			count++;
			System.out.println(number);
		}
		System.out.println("count = " + count);
		
		
//		5.6.2
		int x = 0;
		int odd = 0;
		
		while (true) {
			x++;
			if ((x % 2) == 0)
				continue;
			odd += x;
			if (odd > 1000)
				break;
		}
		System.out.println("odd = " + odd);
		
		
//		5.7.1
		for (int gugudan = 2; gugudan < 10; gugudan += 2) {
			for (int y = 1; y <= gugudan; y++)
				System.out.println(gugudan + " X " + y + " = " + (gugudan * y));
		}
		
		
//		5.7.2
		for (int A = 0; A < 10; A++) {
			for (int B = 0; B < 10; B++) {
				if ((A + B) == 9)
					System.out.println("A = " + A + ", B = " + B);
			}
		}
		
		
	}

}
