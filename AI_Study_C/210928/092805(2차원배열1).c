#include <stdio.h>

int main(void) {

	int arr[2][3] = {
	  { 10, 20, 30 },
	  { 40, 50, 60 }
	};  //  2�� 3���� int�� 2���� �迭 arr
		//  10, 20, 30 - 0��
		//  40, 50, 60 - 1��
		//   l   l   l
		//  0�� 1�� 2��
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 2; j++)
			printf("%d ", arr[i][j]);  //  arr�� i�� j�� �� ���
		printf("\n");  //  ��(��)�ٲ�
	}

	return 0;

}