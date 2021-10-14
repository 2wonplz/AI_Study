#include <stdio.h>

int main(void) {

	int A[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};
	int B[4][2] = { 0, };
	int i, j;

	for (i = 0;; i++) {
		for (j = 0; ; j++)
			A[i][j] = B[j][i];
	}

	printf("2행 4열 배열 출력\n");


	return 0;

}