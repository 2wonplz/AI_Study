#include <stdio.h>

struct Employee {
	char name[10];
	int p_num;
	int y_pay;
};

int main() {

	struct Employee p[3];

	for (int i = 0; i < 3; i++) {
		printf("%d��°\n", i + 1);
		printf("�������� �̸� �Է� : ");
		scanf_s("%s", p[i].name, sizeof(p[i].name));
		printf("�������� �ֹε�Ϲ�ȣ �Է� : ");
		scanf_s("%d", &p[i].p_num);
		printf("�������� ���� �Է� : ");
		scanf_s("%d", &p[i].y_pay);
		printf("\n");
	}

	printf("\n����ü �迭�� ����� �� ���\n");
	for (int i = 0; i < 3; i++) {
		printf("%d��° ������\n", i + 1);
		printf("�̸� : %s\n", p[i].name);
		printf("�ֹε�Ϲ�ȣ : %d\n", p[i].p_num);
		printf("���� : %d\n", p[i].y_pay);
		printf("\n");
	}

	return 0;

}