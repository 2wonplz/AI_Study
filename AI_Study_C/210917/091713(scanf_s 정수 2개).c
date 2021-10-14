#include <stdio.h>

int main(void) {

	int num1;
	int num2;

	printf("정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	//scan + fommatted + secure
	printf("num1 : %d, num2 : %d\n", num1, num2);

	return 0;

}