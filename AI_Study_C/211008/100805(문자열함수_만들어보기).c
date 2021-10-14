#include <stdio.h>

int myStrLen(const char*);
void myStrCpy(char*, const char*);
void myStrCat(char*, const char*);
//char* myStrCat(char*, const char*);

int main() {

	char str1[20] = "Programming";
	char str2[20] = "";
	char str3[20] = " is Fun!";

	printf("str1의 길이 : %d\n", myStrLen(str1));

	myStrCpy(str2, str1);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	myStrCat(str1, str3);
	printf("붙인 결과 : %s\n", str1);

	return 0;

}

int myStrLen(const char* _str) {

	int i;

	for (i = 0; _str[i] != '\0'; i++) {}

	return i;

}

void myStrCpy(char* destination, const char* source) {

	int i;

	for (i = 0; source[i] != '\0'; i++)
		destination[i] = source[i];

	destination[i] = '\0';

}

void myStrCat(char* destination, const char* source) {

	int i, j;

	for (i = 0; destination[i] != '\0'; i++) {}
	
	for (j = 0; source[j] != '\0'; j++) {
		destination[i] = source[j];
		i++;
	}
	
	destination[i] = '\0';

}

/*
char* myStrCat(char* destination, const char* source) {

	myStrCpy(destination + myStrLen(destination), source);

	return destination;

}
*/