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

	printf("�����ͷ� ���� �����ϱ���\n");
	printf("p1�� ����Ű�� �� : %c\n", *p1);
	printf("p2�� ����Ű�� �� : %d\n", *p2);
	printf("p3�� ����Ű�� �� : %f\n", *p3);
	printf("p4�� ����Ű�� �� : %lf\n", *p4);

	(*p1) += 1;
	(*p2) += 1;
	(*p3) += 1;
	(*p4) += 1;

	printf("\n�����ͷ� ���� 1 ���� ��Ų ��\n");
	printf("p1�� ����Ű�� �� : %c\n", *p1);
	printf("p2�� ����Ű�� �� : %d\n", *p2);
	printf("p3�� ����Ű�� �� : %f\n", *p3);
	printf("p4�� ����Ű�� �� : %lf\n", *p4);

	return 0;

}