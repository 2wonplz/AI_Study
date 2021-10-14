#include <stdio.h>

int main(void) {

	int gugudan[3][9] = { 0, };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 2) * (j + 1);
			printf("%2d ", gugudan[i][j]);
		}
		printf("\n");
	}

	return 0;

}