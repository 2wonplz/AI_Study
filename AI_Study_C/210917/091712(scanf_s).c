#include <stdio.h>

int main(void) {

	int num;
	
	printf("정수 입력 : ");
	scanf_s("%d", &num);
	//scan + fommatted + secure
	printf("num : %d\n", num);

	return 0;

}