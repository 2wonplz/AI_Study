#include <stdio.h>

struct person {
	char name[10];
	int age;
	double hei;
};

int main() {

	// struct personŸ�� ���� p1 : �����԰� ���ÿ� �ʱ�ȭ
	struct person p1 = { "�̹�ȣ", 20, 176.5 };
	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("Ű   : %.2lf\n", p1.hei);
	printf("\n");

	// struct personŸ�� ���� p2 : ���� �� �Է¹��� ������ �ʱ�ȭ
	struct person p2 = { "���ȣ", 21, 180.3 };
	printf("�̸� �Է� : ");
	scanf_s("%s", &p2.name, sizeof(p2.name));
	printf("���� �Է� : ");
	scanf_s("%d", &p2.age);
	printf("Ű   �Է� : ");
	scanf_s("%lf", &p2.hei);

	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("Ű   : %.2lf\n", p1.hei);

	return 0;

}