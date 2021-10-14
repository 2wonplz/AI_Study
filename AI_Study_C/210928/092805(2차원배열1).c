#include <stdio.h>

int main(void) {

	int arr[2][3] = {
	  { 10, 20, 30 },
	  { 40, 50, 60 }
	};  //  2행 3열의 int형 2차원 배열 arr
		//  10, 20, 30 - 0행
		//  40, 50, 60 - 1행
		//   l   l   l
		//  0열 1열 2열
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 2; j++)
			printf("%d ", arr[i][j]);  //  arr의 i행 j열 값 출력
		printf("\n");  //  행(줄)바꿈
	}

	return 0;

}