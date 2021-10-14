#include <stdio.h>

int main(void) {

	//삼항 연산자 (조건 연산자)
	//A ? B : C
	//A가 참이면 B 반환
	//A가 거짓이면 C 반환
	
	int num = 10;

	int result = num > 0 ? num : -num;
	//명제가 참이므로 num 반환
	printf("%d\n", result);  //  10

	result = num < 0 ? num : -num;
	//명제가 거짓이므로 -num 반환
	printf("%d\n", result);  //  -10

	return 0;

}