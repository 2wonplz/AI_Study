#include <stdio.h>

int main() {

	// 배열 이름 자체는 주소
	// 배열의 이름은 배열의 시작주소
	// arr == &arr[0]
	// 배열 이름은 상수형 포인터
	// ★★★핵심 arr[i] == *(arr + i)


	char str[10] = "hello";

	printf("%s\n", str); // hello
	// str은 배열의 시작주소
	// str은 &str[0]
	// 문자 h가 들어있는 공간주소
	// %s - 문자열 시작주소를 전달받아 거기서부터 널문자 나올때까지
	printf("%s\n", str + 1); // ello
	printf("%s\n", str + 2); // llo
	printf("%s\n", str + 3); // lo
	printf("%s\n", str + 4); // o

	return 0;

}