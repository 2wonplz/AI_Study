#include <stdio.h>

struct person {
	char sx;
	char name[10];
	int age;
	double hei;
	double wei;
	char blood;
};

int main() {

	struct person p[3];
	double arr[3];

	for (int i = 0; i < 3; i++) {
		printf("%d��° ��� �Է�\n", i + 1);
		printf("���� �Է� <M, P> : ");
		scanf_s("%c", &p[i].sx, sizeof(p[i].sx));
		printf("�̸� �Է� : ");
		scanf_s("%s", &p[i].name, sizeof(p[i].name));
		printf("���� �Է� : ");
		scanf_s("%d", &p[i].age);
		printf("Ű �Է� : ");
		scanf_s("%lf", &p[i].hei);
		printf("������ �Է� : ");
		scanf_s("%lf", &p[i].wei);
		getchar();
		printf("������ �Է� : ");
		scanf_s("%c", &p[i].blood, sizeof(p[i].blood));
		getchar();
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		if (p[i].sx == 'M')
			arr[i] = (p[i].hei / 100) * (p[i].hei / 100) * 22;
		else
			arr[i] = (p[i].hei / 100) * (p[i].hei / 100) * 21;
	}

	for (int i = 0; i < 3; i++) {
		printf("%s���� ���� ü���� %.1lfkg\n", p[i].name, p[i].wei);
		printf("ǥ�� ü���� %.1lfkg\n", arr[i]);
		if (arr[i] > p[i].wei)
			printf("%.1lfkg �� �����ϼ���\n\n", arr[i] - p[i].wei);
		else
			printf("%.1lfkg �� �����ϼ���\n\n", p[i].wei - arr[i]);
	}

	return 0;

}