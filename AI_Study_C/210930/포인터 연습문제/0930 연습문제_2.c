#include <stdio.h>

int main(void) {

	int a = 10, b = 20;
	int* p1 = &a;
	int* p2 = &b;

	printf("p1�� ����Ű�� �� : %d\n", *p1);
	printf("p2�� ����Ű�� �� : %d\n", *p2);

	(*p1) -= 1;
	(*p2) -= 1;

	printf("\n��������(�����͸� �̿��Ͽ�)���� 1 ����\n");
	printf("p1�� ����Ű�� �� : %d\n", *p1);
	printf("p2�� ����Ű�� �� : %d\n", *p2);

	p1 = &b;
	p2 = &a;

	printf("\np1�� p2�� ����Ű�� ��� ����\n");
	printf("p1�� ����Ű�� �� : %d\n", *p1);
	printf("p2�� ����Ű�� �� : %d\n", *p2);

	return 0;

}