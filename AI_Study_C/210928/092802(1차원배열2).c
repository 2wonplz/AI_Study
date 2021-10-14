#include <stdio.h>

int main(void) {

	double arr[3] = { 0, };
	// 길이가 3인 double형 1차원배열 arr

	arr[0] = 1.1;
	arr[1] = 2.2;
	arr[2] = 3.3;

	for (int i = 0; i < 3; i++)
		printf("%lf\n", arr[i]);

	return 0;

}