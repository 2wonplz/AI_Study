#include <stdio.h>

int main(void) {

	float num1 = 3.14;
	double num2 = 3.14;
	//�Ǽ��� ������ ������ �ִ�

	printf("num1 : %f\n", num1);
	printf("num2 : %f\n", num2);
	printf("num1 : %.10f\n", num1);
	printf("num2 : %.10f\n", num2);
	printf("num1 : %.20f\n", num1);
	printf("num2 : %.20f\n", num2);

	return 0;

}