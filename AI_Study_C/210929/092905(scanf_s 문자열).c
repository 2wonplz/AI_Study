#include <stdio.h>

int main(void) {

	char str[50];
	int idx = 0;

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));
	printf("�Է� ���� ���ڿ� : %s\n", str);
	// %s�� ���ڿ��� �����ּҸ� �޾Ƽ�
	// �ű���� �ι��� ������ ���

	printf("���� ���� ��� : ");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}  //  str�迭�� idx��°���� �ι��� ������ ���������� ���

	printf("\n");

	return 0;

}