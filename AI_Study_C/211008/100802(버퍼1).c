#include <stdio.h>

int main() {

	int age;
	char blood;

	printf("���� �Է�   : ");
	scanf_s("%d", &age);
	getchar();  //  ���� �ϳ� �Է¹޴� �Լ�
	//  ���ۿ��� ���� �ϳ� �о���̴� �Լ�
	printf("������ �Է� : ");
	scanf_s("%c", &blood, sizeof(blood));

	printf("����   : %d\n", age);
	printf("������ : %c\n", blood);

	return 0;

}