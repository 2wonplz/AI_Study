#include <stdio.h>

int main(void) {

	float num1;
	double num2;

	printf("float �Ǽ� �Է� : ");
	scanf_s("%f", &num1);  //  float
	printf("double �Ǽ� �Է� : ");
	scanf_s("%lf", &num2);  //  long float
	printf("num1 : %f\n", num1);
	printf("num2 : %lf\n", num2);

	return 0;

}