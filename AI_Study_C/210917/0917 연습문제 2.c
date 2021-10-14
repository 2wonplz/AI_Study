#include <stdio.h>

int main(void) {

	double num1, num2;

	printf("두 숫자를 입력하세요\n");
	scanf_s("%lf %lf", &num1, &num2);
	
	printf("%.1lf + %.1lf = %.1lf\n", num1, num2, (num1 + num2));
	printf("%.1lf - %.1lf = %.1lf\n", num1, num2, (num1 - num2));
	printf("%.1lf × %.1lf = %.1lf\n", num1, num2, (num1 * num2));
	printf("%.1lf ÷ %.1lf = %.1lf\n", num1, num2, (num1 / num2));

	return 0;

}