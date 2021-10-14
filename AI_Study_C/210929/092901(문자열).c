#include <stdio.h>

int main(void) {

	char str[] = "Good morning!";

	printf("배열 str의 크기 : %d\n", sizeof(str));
	printf("널 문자 문자형 출력 : %c\n", str[13]);
	printf("널 문자 정수형 출력 : %d\n", str[13]);

	str[12] = '?';
	printf("문자열 출력 : %s\n", str);
	// 널문자 (null character) : 문자열의 끝을 지정하는 문자
	// char배열에 문자열을 저장하면 널문자가 자동으로 삽입된다

	return 0;

}