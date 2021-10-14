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

	// strlen = string length : ���ڿ� ����
	printf("str1�� ���� : %d\n", strlen(str1));

	// strcpy = string copy : ���ڿ� ����
	strcpy_s(str2, sizeof(str1),str1);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	// strcat = string concatenate : ���ڿ� ����
	strcat_s(str1, sizeof(str3), str3);
	printf("���� ��� : %s\n", str1);
	/*
	Programmin g  \0
	0123456789 10 11

	 is Fun! \0
	01234567 8

	Programmin  g  i  s  F  u  n  ! \0
	0123456789 10 11 12 13 14 15 16 17
	*/

	// strcmp = string campare : ���ڿ� ��
	// 1, 0, -1
	// 1 : ���� ŭ, 0 : ����, -1 : �ڰ� ŭ
	result = strcmp(str5, str4);
	printf("result : %d\n", result);  //   1
	result = strcmp(str4, str4);
	printf("result : %d\n", result);  //   0
	result = strcmp(str4, str5);
	printf("result : %d\n", result);  //  -1

	return 0;

}