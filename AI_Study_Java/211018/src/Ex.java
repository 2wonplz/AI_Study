
public class Ex {

	public static void main(String[] args) {

//		5.1
		int num = 120;
		
		if ((num > 0) && (num % 2 == 0))
			System.out.println("����̸鼭 ¦��");
		
		
//		5.2
		int num1 = 50;
		int num2 = 100;
		int big, diff;
		
		if (num1 > num2) {
			big = num1;
			System.out.println("ū �� : " + big);
		} else {
			big = num2;
			System.out.println("ū �� : " + big);
		}
		
		if (num1 > num2) {
			diff = num1 - num2;
			System.out.println("���� : " + diff);
		} else {
			diff = num2 - num1;
			System.out.println("���� : " + diff);
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
			System.out.println("0 �̻� 10 �̸��� ��");
			break;
		case 2: 
			System.out.println("10 �̻� 20 �̸��� ��");
			break;
		case 3: 
			System.out.println("20 �̻� 30 �̸��� ��");
			break;
		default:
			System.out.println("���� Ȥ�� 30 �̻��� ��");
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
