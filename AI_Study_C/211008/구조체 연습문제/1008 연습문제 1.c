#include <stdio.h>

struct Employee {
	char name[10];
	int p_num;
	int y_pay;
};

int main() {

	struct Employee p;

	printf("�������� �̸� �Է� : ");
	scanf_s("%s", p.name, sizeof(p.name));
	printf("�������� �ֹε�Ϲ�ȣ �Է� : ");
	scanf_s("%d", &p.p_num);
	printf("�������� ���� �Է� : ");
	scanf_s("%d", &p.y_pay);

	printf("\n����ü�� ����� �� ���\n");
	printf("�̸� : %s\n", p.name);
	printf("�ֹε�Ϲ�ȣ : %d\n", p.p_num);
	printf("���� : %d\n", p.y_pay);

	return 0;

}