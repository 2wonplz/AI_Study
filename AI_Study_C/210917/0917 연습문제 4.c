#include <stdio.h>

int main(void) {

	double C, F;

	printf("현재 섭씨 온도를 입력하세요\n");
	scanf_s("%lf", &C);

	F = C * 1.8 + 32;

	printf("변환된 화씨 온도는 %.3lf", F);

	return 0;

}