#include <stdio.h>

int main(void) {

	int arr[3] = { 0, };  //  모두 0으로 초기화
	// 길이가 3인 int형 1차원배열 arr

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	// 배열은 0번째부터 시작

	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);

	return 0;

}