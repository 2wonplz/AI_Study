#include <stdio.h>

int main(void) {

	//���� ������ (���� ������)
	//A ? B : C
	//A�� ���̸� B ��ȯ
	//A�� �����̸� C ��ȯ
	
	int num = 10;

	int result = num > 0 ? num : -num;
	//������ ���̹Ƿ� num ��ȯ
	printf("%d\n", result);  //  10

	result = num < 0 ? num : -num;
	//������ �����̹Ƿ� -num ��ȯ
	printf("%d\n", result);  //  -10

	return 0;

}