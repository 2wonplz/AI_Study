#include <stdio.h>

int main(void) {

	int num1, num2, num3;
	double aver;

	printf("���� ���� ������ ������ �Է��ϼ���\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	
	aver = (num1 + num2 + num3) / 3;

	printf("�� ������ ����� %.1lf", aver);

	return 0;

}