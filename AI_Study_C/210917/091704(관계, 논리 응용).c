#include <stdio.h>

int main(void) {

	int num1 = 9;
	int num2 = 5;
	int num3 = 4;
	//���Կ����� ������ �����ʿ��� ����
	//��κ��� �����ڴ� ���ʿ��� ������
	
	int result = (num1 >= num2) && (num2 >= num3);
	//num1�� num2���� ũ�ų� ���� num2�� num3���� ũ�ų� ������? - true
	printf("%d\n", result);  //  1
	result = (num1 >= num2) && (num2 == num3);
	//num1�� num2���� ũ�ų� ���� num2�� num3�� ������? - false
	printf("%d\n", result);  //  0

	return 0;

}