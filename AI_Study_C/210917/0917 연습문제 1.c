#include <stdio.h>

int main(void) {

	double hei;
	int age;
	char blood;

	printf("Ű�� ���� �������� �Է��ϼ���\n");
	scanf_s("%lf %d %c", &hei, &age, &blood, sizeof(blood));
	printf("Ű : %lf\n", hei);
	printf("���� : %d\n", age);
	printf("������ : %c\n", blood);

	return 0;

}