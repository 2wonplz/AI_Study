#include <stdio.h>

struct person {
	char name[10];
	int age;
	double hei;
};

typedef struct person Person;
// type definition
// struct person -> Person

int main() {

	struct person p = { "이민호", 20, 176.4 };
	struct person* ptr = &p;
	// Person p = { "이민호", 20, 176.4 };
	// Person* ptr = &p;
	
	printf("이름 : %s", p.name);
	printf("이름 : %s", (*ptr).name);
	// ptr이 가리키는 곳의 name
	printf("이름 : %s", ptr->name);
	// 화살표 연산자 사용해서 참조
	// (*ptr).name == ptr->name

	return 0;

}