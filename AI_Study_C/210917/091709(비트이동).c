#include <stdio.h>

int main(void) {

	// << : 비트 왼쪽이동
	// >> : 비트 오른쪽이동

	int num = 10;
	int result = (num << 1);
	//num의 비트를 왼쪽으로 1칸 이동
	//00000000 00000000 00000000 00001010  <<
	//00000000 00000000 00000000 00010100
	//(대체적으로) 2를 곱한 효과가 된다 : 가장 왼쪽 비트는 부호자리 유의
	printf("%d\n", result);  //  20

	result = (num >> 1);
	//num의 비트를 오른쪽으로 1칸 이동
	//00000000 00000000 00000000 00001010  >>
	//00000000 00000000 00000000 00000101
	//(대체적으로) 2를 나눈 효과가 된다 : 가장 왼쪽 비트는 부호자리 유의
	printf("%d\n", result);  //  5

	return 0;

}