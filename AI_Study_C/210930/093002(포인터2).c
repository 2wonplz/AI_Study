#include <stdio.h>

int main(void) {

	int num1 = 100, num2 = 100;
	int* pnum = NULL;  //  �������� ����

	pnum = &num1;
	// int�� �����ͺ��� pnum�� num1 ������ �ּҸ� ����
	(*pnum) += 30;

	pnum = &num2;
	// int�� �����ͺ��� pnum�� num2 ������ �ּҸ� ����
	(*pnum) -= 30;

	printf("num1 : %d, num2 : %d\n", num1, num2);

	return 0;

}