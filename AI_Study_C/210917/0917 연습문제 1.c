#include <stdio.h>

int main(void) {

	double hei;
	int age;
	char blood;

	printf("키와 나이 혈액형을 입력하세요\n");
	scanf_s("%lf %d %c", &hei, &age, &blood, sizeof(blood));
	printf("키 : %lf\n", hei);
	printf("나이 : %d\n", age);
	printf("혈액형 : %c\n", blood);

	return 0;

}