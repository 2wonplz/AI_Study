#include <stdio.h>
#include <stdbool.h>

int main(void) {

	//��������
	// �� �������� �����ϴ� ������
	// �� ��, ���������� �����ϴ� ������
	//1 - true, 0 - false
	//�������� ����
	//�� AND, �� OR, �� NOT
	
	//�� AND - && (& : ampersand)
	//�� AND�� ����ǥ (true table)
	printf("%d\n", 0 && 0);  //  0
	printf("%d\n", 0 && 1);  //  0
	printf("%d\n", 1 && 0);  //  0
	printf("%d\n", 1 && 1);  //  1
	printf("\n");
	printf("%d\n", false && false);  // 0
	printf("%d\n", false && true);   // 0
	printf("%d\n", true && false);   // 0
	printf("%d\n", true && true);    // 1

	return 0;

}