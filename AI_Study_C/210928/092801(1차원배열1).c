#include <stdio.h>

int main(void) {

	int arr[3] = { 0, };  //  ��� 0���� �ʱ�ȭ
	// ���̰� 3�� int�� 1�����迭 arr

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	// �迭�� 0��°���� ����

	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);

	return 0;

}