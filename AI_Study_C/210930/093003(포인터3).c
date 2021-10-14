#include <stdio.h>

int main(void) {

	int num = 10;
	int* ptr = &num;

	printf("ptr : %p\n", ptr);
	printf("&num : %p\n", &num);
	// %p(pointer) : 주소 서식문자

	return 0;

}