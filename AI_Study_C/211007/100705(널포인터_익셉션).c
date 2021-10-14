#include <stdio.h>

int main() {

	//  Java
	//  Person p = new Person();
	//  오른쪽에서 객체가 생성되서 객체의 주소가 p에 들어감

	//  C++
	//  Person* p = new Person();

	//  JavaScript
	//  var date = new Date();

	int num = 10;
	int* ptr = NULL;
	printf("%d\n", *ptr);

	//  예외가 throw됨 : 읽기 액세스 위반입니다.
	//	ptr이(가) nullptr였습니다.

	return 0;

}