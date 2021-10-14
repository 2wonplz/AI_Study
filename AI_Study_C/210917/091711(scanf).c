#define _CRT_SECURE_NO_WARNINGS
//CRT = C RunTime Libary
// ㄴ C언어 표준함수 관련 라이브러리
#include <stdio.h>

int main(void) {

	//scanf - scan + fommatted : 형식이 지정된 입력을 받는 함수
	
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);
	// ㄴ num 변수에 %d 형태로 키보드 입력을 받겠다
	//&num : num 변수의 주소
	printf("num : %d\n", num);
	
	return 0;

}