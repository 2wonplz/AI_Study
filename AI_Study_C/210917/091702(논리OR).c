#include <stdio.h>
#include <stdbool.h>

int main(void) {

	//논리 연산자
	//논리 OR
	// ㄴ 논리 합, 또는, 선택
	// 0 || 0 : 0
	// 0 || 1 : 1
	// 1 || 0 : 1
	// 1 || 1 : 1
	//0만 거짓을 의미
	//나머진 다 참값
	//대표 참값이 1
	printf("%d\n", 0 || 0);  // 0
	printf("%d\n", 0 || 1);  // 1
	printf("%d\n", 1 || 0);  // 1
	printf("%d\n", 1 || 1);  // 1
	printf("\n");
	printf("%d\n", false || false);  // 0
	printf("%d\n", false || true);   // 1
	printf("%d\n", true || false);   // 1
	printf("%d\n", true || true);    // 1

	return 0;

}