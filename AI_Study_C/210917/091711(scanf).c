#define _CRT_SECURE_NO_WARNINGS
//CRT = C RunTime Libary
// �� C��� ǥ���Լ� ���� ���̺귯��
#include <stdio.h>

int main(void) {

	//scanf - scan + fommatted : ������ ������ �Է��� �޴� �Լ�
	
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);
	// �� num ������ %d ���·� Ű���� �Է��� �ްڴ�
	//&num : num ������ �ּ�
	printf("num : %d\n", num);
	
	return 0;

}