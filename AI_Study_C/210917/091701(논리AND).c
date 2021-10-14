#include <stdio.h>
#include <stdbool.h>

int main(void) {

	//논리연산자
	// ㄴ 논리가지고 연산하는 연산자
	// ㄴ 참, 거짓가지고 연산하는 연산자
	//1 - true, 0 - false
	//논리연산자 종류
	//논리 AND, 논리 OR, 논리 NOT
	
	//논리 AND - && (& : ampersand)
	//논리 AND의 진리표 (true table)
	printf("%d\n", 0 && 0);  //  0
	printf("%d\n", 0 && 1);  //  0
	printf("%d\n", 1 && 0);  //  0
	printf("%d\n", 1 && 1);  //  1
	printf("\n");
	printf("%d\n", false && false);  // 0
	printf("%d\n", false && true);   // 0
	printf("%d\n", true && false);   // 0
	printf("%d\n", true && true);    // 1

	return 0;

}