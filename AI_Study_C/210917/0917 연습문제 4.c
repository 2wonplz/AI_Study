#include <stdio.h>

int main(void) {

	double C, F;

	printf("���� ���� �µ��� �Է��ϼ���\n");
	scanf_s("%lf", &C);

	F = C * 1.8 + 32;

	printf("��ȯ�� ȭ�� �µ��� %.3lf", F);

	return 0;

}