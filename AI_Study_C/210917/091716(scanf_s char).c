#include <stdio.h>

int main(void) {

	char ch;
	//char는 원래 실체가 정수
	//근데 그냥 문자..

	printf("문자 입력 : ");
	scanf_s("%c", &ch, sizeof(ch));
	//scanf("%c", &ch);
	printf("ch : %c\n", ch);

	return 0;

}