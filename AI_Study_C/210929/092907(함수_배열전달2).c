#include <stdio.h>

double avgHei(double[]);

int main(void) {

	double hei[10];
	double avg;

	for (int i = 0; i < 10; i++) {
		printf("%d번째 키 입력 : ", (i + 1));
		scanf_s("%lf", &hei[i]);
	}

	avg = avgHei(hei);
	printf("평균 키 : %.1lf\n", avg);

	return 0;

}

double avgHei(double param[]) {

	double sum = 0;

	for (int i = 0; i < 10; i++)
		sum += param[i];

	return sum / 10;

}