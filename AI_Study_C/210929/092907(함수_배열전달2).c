#include <stdio.h>

double avgHei(double[]);

int main(void) {

	double hei[10];
	double avg;

	for (int i = 0; i < 10; i++) {
		printf("%d��° Ű �Է� : ", (i + 1));
		scanf_s("%lf", &hei[i]);
	}

	avg = avgHei(hei);
	printf("��� Ű : %.1lf\n", avg);

	return 0;

}

double avgHei(double param[]) {

	double sum = 0;

	for (int i = 0; i < 10; i++)
		sum += param[i];

	return sum / 10;

}