#include <stdio.h>

int main(void) {

	char str[50];
	int idx = 0;

	printf("문자열 입력 : ");
	scanf_s("%s", str, sizeof(str));
	printf("입력 받은 문자열 : %s\n", str);
	// %s는 문자열의 시작주소를 받아서
	// 거기부터 널문자 전까지 출력

	printf("문자 단위 출력 : ");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}  //  str배열의 idx번째부터 널문자 전까지 순차적으로 출력

	printf("\n");

	return 0;

}