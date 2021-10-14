#include <stdio.h>

int main(void) {

	int num1, num2, num3;
	double aver;

	printf("국어 영어 수학의 점수를 입력하세요\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	
	aver = (num1 + num2 + num3) / 3;

	printf("세 성적의 평균은 %.1lf", aver);

	return 0;

}