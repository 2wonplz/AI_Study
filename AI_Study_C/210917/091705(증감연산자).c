#include <stdio.h>

int main(void) {

	//����, ���� ������
	
	//���� ������ : ++ : 1 ���� : �������� 1 ������ ������ �ٲ��
	// ++num : ������, ��������
	// num++ : ������, ��������
	
	//���� ������ : -- : 1 ���� : �������� 1 ���ҵ� ������ �ٲ��
	// --num : ������, ��������
	// num-- : �İ���, ��������
	
	int num1 = 10;
	int num2 = 10;
	int num3 = 10;
	int num4 = 10;

	printf("%d\n", num1);    //  10
	printf("%d\n", num1++);  //  10
	printf("%d\n", num1);    //  11
	printf("\n");
	printf("%d\n", num2);    //  10
	printf("%d\n", ++num2);  //  11
	printf("%d\n", num2);    //  11
	printf("\n");
	printf("%d\n", num3);    //  10
	printf("%d\n", num3--);  //  10
	printf("%d\n", num3);    //  9
	printf("\n");
	printf("%d\n", num4);    //  10
	printf("%d\n", --num4);  //  9
	printf("%d\n", num4);    //  9

	return 0;

}