#include <stdio.h>

int main(void) {

	char str[] = "Good morning!";

	printf("�迭 str�� ũ�� : %d\n", sizeof(str));
	printf("�� ���� ������ ��� : %c\n", str[13]);
	printf("�� ���� ������ ��� : %d\n", str[13]);

	str[12] = '?';
	printf("���ڿ� ��� : %s\n", str);
	// �ι��� (null character) : ���ڿ��� ���� �����ϴ� ����
	// char�迭�� ���ڿ��� �����ϸ� �ι��ڰ� �ڵ����� ���Եȴ�

	return 0;

}