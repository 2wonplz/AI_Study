#include <stdio.h>

int main(void) {

	// ++num : ������ �Ŀ���
	// num++ : ������ ������
	// --num : ������ �Ŀ���
	// num-- : ������ �İ���

	int num = 10;
	int result = (num--) + 5;
	// +5�� �����ϰ� ���Ҹ� ���߿� �Ѵ�

	printf("%d\n", num);     //  9
	printf("%d\n", result);  //  15

	return 0;

}