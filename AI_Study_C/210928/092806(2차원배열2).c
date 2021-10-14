#include <stdio.h>

int main(void) {

	int arr[2][3] = { 0, };

	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 2; j++) {
			printf("%d행 %d열 값 입력 : ", i, j);
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}

	return 0;

}