#include <stdio.h>

int main(void) {

	// ASCII
	// American Standard Code for Infomation Interchange
	// 정보 교환을 위한 미국 표준 코드

	char ch1 = 'A';
	char ch2 = 'Z';
	// 'A'의 아스키코드 값은 65
	// 'A'랑 65는 사실 같다

	printf("%c %d\n", ch1, ch1);  //  A 65
	printf("%c %d\n", ch2, ch2);  //  Z 90

	return 0;

}