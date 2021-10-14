#include <stdio.h>

int main(void) {

	// 포인터 연산 - 주소를 가지고 연산
	// 포인터변수에 +1하면 그 포인터변수가 가리키는 자료형의 크기만큼 증가
	// int형 포인터변수에 +1하면 +4가 된다
	// double형 포인터변수에 +1하면 +8이 된다
	// char형 포인터변수에 +1하면 +1이 된다
	int n1 = 10;
	int* p1 = &n1;

	double n2 = 3.14;
	double* p2 = &n2;

	printf("%p %p\n", p1, p2);
	printf("%p %p\n", p1 + 1, p2 + 1);
	printf("%p %p\n", p1 + 2, p2 + 2);

	return 0;

}