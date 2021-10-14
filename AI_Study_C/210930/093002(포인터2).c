#include <stdio.h>

int main(void) {

	int num1 = 100, num2 = 100;
	int* pnum = NULL;  //  널포인터 저장

	pnum = &num1;
	// int형 포인터변수 pnum에 num1 변수의 주소를 저장
	(*pnum) += 30;

	pnum = &num2;
	// int형 포인터변수 pnum에 num2 변수의 주소를 저장
	(*pnum) -= 30;

	printf("num1 : %d, num2 : %d\n", num1, num2);

	return 0;

}