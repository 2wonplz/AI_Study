#include <stdio.h>

int main() {

	int age;
	double hei;

	printf("나이 입력 : ");
	scanf_s("%d", &age);
	
	printf("키 입력   : ");
	scanf_s("%lf", &hei);

	printf("나이 : %d\n", age);
	printf("키   : %.2lf\n", hei);

	return 0;

}
