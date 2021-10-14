#include <stdio.h>

int main(void) {

	int arr[3] = { 0, 1, 2 };
	
	printf("배열의 이름  : %p\n", arr);
	// 배열의 이름은 상수형 포인터(주소)
	printf("첫 번째 요소 : %p\n", &arr[0]);
	printf("두 번째 요소 : %p\n", &arr[1]);
	printf("세 번째 요소 : %p\n", &arr[2]);
	// 배열의 이름은 배열의 시작주소
	// 배열 0번째 공간의 주소와 같다
	// arr == &arr[0]
	// 주소값이 4씩 (int : 4 byte) 차이난다

	return 0;

}