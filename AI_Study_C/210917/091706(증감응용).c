#include <stdio.h>

int main(void) {

	// ++num : 선증가 후연산
	// num++ : 선연산 후증가
	// --num : 선감소 후연산
	// num-- : 선연산 후감소

	int num = 10;
	int result = (num--) + 5;
	// +5를 먼저하고 감소를 나중에 한다

	printf("%d\n", num);     //  9
	printf("%d\n", result);  //  15

	return 0;

}