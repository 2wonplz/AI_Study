#include <stdio.h>

int main(void) {

	char a = 'a';
	int b = 1;
	float c = 1.3f;
	double d = 3.5;

	char* p1 = &a;
	int* p2 = &b;
	float* p3 = &c;
	double* p4 = &d;

	printf("포인터로 값을 변경하기전\n");
	printf("p1이 가리키는 값 : %c\n", *p1);
	printf("p2가 가리키는 값 : %d\n", *p2);
	printf("p3가 가리키는 값 : %f\n", *p3);
	printf("p4가 가리키는 값 : %lf\n", *p4);

	(*p1) += 1;
	(*p2) += 1;
	(*p3) += 1;
	(*p4) += 1;

	printf("\n포인터로 값을 1 증가 시킨 후\n");
	printf("p1이 가리키는 값 : %c\n", *p1);
	printf("p2가 가리키는 값 : %d\n", *p2);
	printf("p3가 가리키는 값 : %f\n", *p3);
	printf("p4가 가리키는 값 : %lf\n", *p4);

	return 0;

}