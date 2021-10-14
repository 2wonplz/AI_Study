#include <stdio.h>

int main(void) {

	//증가, 감소 연산자
	
	//증가 연산자 : ++ : 1 증가 : 변수값이 1 증가된 값으로 바뀐다
	// ++num : 선증가, 전위증가
	// num++ : 후증가, 후위증가
	
	//감소 연산자 : -- : 1 감소 : 변수값이 1 감소된 값으로 바뀐다
	// --num : 선감소, 전위감소
	// num-- : 후감소, 후위감소
	
	int num1 = 10;
	int num2 = 10;
	int num3 = 10;
	int num4 = 10;

	printf("%d\n", num1);    //  10
	printf("%d\n", num1++);  //  10
	printf("%d\n", num1);    //  11
	printf("\n");
	printf("%d\n", num2);    //  10
	printf("%d\n", ++num2);  //  11
	printf("%d\n", num2);    //  11
	printf("\n");
	printf("%d\n", num3);    //  10
	printf("%d\n", num3--);  //  10
	printf("%d\n", num3);    //  9
	printf("\n");
	printf("%d\n", num4);    //  10
	printf("%d\n", --num4);  //  9
	printf("%d\n", num4);    //  9

	return 0;

}