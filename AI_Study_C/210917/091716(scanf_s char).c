#include <stdio.h>

int main(void) {

	char ch;
	//char�� ���� ��ü�� ����
	//�ٵ� �׳� ����..

	printf("���� �Է� : ");
	scanf_s("%c", &ch, sizeof(ch));
	//scanf("%c", &ch);
	printf("ch : %c\n", ch);

	return 0;

}