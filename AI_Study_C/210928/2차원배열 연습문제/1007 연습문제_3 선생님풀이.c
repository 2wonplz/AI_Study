#include <stdio.h>

void input(int score[][5]);
void process(int score[][5]);
void print(int score[][5]);

int main() {

	int score[5][5] = { 0, };
	
	input(score);
	process(score);
	print(score);

	return 0;

}

void input(int score[][5]) {

	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++)
			scanf_s("%d", &score[i][j]);
	}

}

void process(int score[][5]) {

	/*
	10 20 30 40 -> 
	20 30 40 50 -> 
	30 40 50 60 -> 
	40 50 60 70 -> 
	 |  |  |  |
	*/
	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++) {
			score[i][4] += score[i][j];
		}
	}

	for (int i = 0; i <= 3; i++) {
		for (int j = 0; j <= 3; j++) {
			score[4][i] += score[j][i];
		}
	}

}

void print(int score[][5]) {

	printf("\n");
	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j <= 4; j++)
			printf("%3d ", score[i][j]);
		printf("\n");
	}

}