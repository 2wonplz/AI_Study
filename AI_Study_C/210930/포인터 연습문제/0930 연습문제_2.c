#include <stdio.h>

int main(void) {

	int a = 10, b = 20;
	int* p1 = &a;
	int* p2 = &b;

	printf("p1이 가리키는 값 : %d\n", *p1);
	printf("p2가 가리키는 값 : %d\n", *p2);

	(*p1) -= 1;
	(*p2) -= 1;

	printf("\n간접접근(포인터를 이용하여)으로 1 감소\n");
	printf("p1이 가리키는 값 : %d\n", *p1);
	printf("p2가 가리키는 값 : %d\n", *p2);

	p1 = &b;
	p2 = &a;

	printf("\np1과 p2가 가리키는 대상 변경\n");
	printf("p1이 가리키는 값 : %d\n", *p1);
	printf("p2가 가리키는 값 : %d\n", *p2);

	return 0;

}