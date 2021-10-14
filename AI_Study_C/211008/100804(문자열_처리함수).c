#include <stdio.h>
#include <string.h>

int main() {

	char str1[20] = "Programming";
	char str2[20] = "";
	char str3[20] = " is Fun!";
	char str4[20] = "APPLE";
	char str5[20] = "BEAR";
	char str6[20] = "APPLICATION";
	int result = 0;

	// strlen = string length : 문자열 길이
	printf("str1의 길이 : %d\n", strlen(str1));

	// strcpy = string copy : 문자열 복사
	strcpy_s(str2, sizeof(str1),str1);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	// strcat = string concatenate : 문자열 연결
	strcat_s(str1, sizeof(str3), str3);
	printf("붙인 결과 : %s\n", str1);
	/*
	Programmin g  \0
	0123456789 10 11

	 is Fun! \0
	01234567 8

	Programmin  g  i  s  F  u  n  ! \0
	0123456789 10 11 12 13 14 15 16 17
	*/

	// strcmp = string campare : 문자열 비교
	// 1, 0, -1
	// 1 : 앞이 큼, 0 : 같음, -1 : 뒤가 큼
	result = strcmp(str5, str4);
	printf("result : %d\n", result);  //   1
	result = strcmp(str4, str4);
	printf("result : %d\n", result);  //   0
	result = strcmp(str4, str5);
	printf("result : %d\n", result);  //  -1

	return 0;

}