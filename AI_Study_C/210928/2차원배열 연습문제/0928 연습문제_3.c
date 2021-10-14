#include <stdio.h>

int main(void) {
	
	int score[5][5] = { 0, };
	int i, j, sum;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			scanf_s("%d", &score[i][j]);
	}

	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 4; j++) {
			sum += score[i][j];
			score[i][4] = sum;
		}
	}

	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 4; j++) {
			sum += score[j][i];
			score[4][j] = sum;
		}
	}

	printf("\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d ", score[i][j]);
		printf("\n");
	}

	return 0;

}