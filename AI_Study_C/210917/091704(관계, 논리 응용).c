#include <stdio.h>

int main(void) {

	int num1 = 9;
	int num2 = 5;
	int num3 = 4;
	//대입연산자 방향은 오른쪽에서 왼쪽
	//대부분의 연산자는 왼쪽에서 오른쪽
	
	int result = (num1 >= num2) && (num2 >= num3);
	//num1이 num2보다 크거나 같고 num2가 num3보다 크거나 같은가? - true
	printf("%d\n", result);  //  1
	result = (num1 >= num2) && (num2 == num3);
	//num1이 num2보다 크거나 같고 num2와 num3가 같은가? - false
	printf("%d\n", result);  //  0

	return 0;

}