#include <stdio.h>

struct person {
	char name[10];
	int age;
	double hei;
};

int main() {

	// ���̰� 100�� struct personŸ�� �迭 p
	struct person p[100];

	for (int i = 0; i <= 2; i++) {
		printf("%d��° ��� ���� �Է�\n", i + 1);
		printf("�̸� �Է� : ");
		scanf_s("%s", &p[i].name, sizeof(p[i].name));
		printf("���� �Է� : ");
		scanf_s("%d", &p[i].age);
		printf("Ű   �Է� : ");
		scanf_s("%lf", &p[i].hei);
	}

	for (int i = 0; i <= 2; i++) {
		printf("\n%d��° ��� ����\n", i + 1);
		printf("�̸� : %s\n", p[i].name);
		printf("���� : %d\n", p[i].age);
		printf("Ű   : %.2lf\n", p[i].hei);
	}

	return 0;

}