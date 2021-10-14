#include <stdio.h>

int main() {

	int age;
	char blood;

	printf("나이 입력   : ");
	scanf_s("%d", &age);
	getchar();  //  문자 하나 입력받는 함수
	//  버퍼에서 문자 하나 읽어들이는 함수
	printf("혈액형 입력 : ");
	scanf_s("%c", &blood, sizeof(blood));

	printf("나이   : %d\n", age);
	printf("혈액형 : %c\n", blood);

	return 0;

}