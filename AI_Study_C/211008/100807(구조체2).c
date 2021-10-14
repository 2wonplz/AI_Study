#include <stdio.h>

struct person {
	char name[10];
	int age;
	double hei;
};

int main() {

	// struct person타입 변수 p1 : 선언함과 동시에 초기화
	struct person p1 = { "이민호", 20, 176.5 };
	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("키   : %.2lf\n", p1.hei);
	printf("\n");

	// struct person타입 변수 p2 : 선언 후 입력받은 값으로 초기화
	struct person p2 = { "김민호", 21, 180.3 };
	printf("이름 입력 : ");
	scanf_s("%s", &p2.name, sizeof(p2.name));
	printf("나이 입력 : ");
	scanf_s("%d", &p2.age);
	printf("키   입력 : ");
	scanf_s("%lf", &p2.hei);

	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("키   : %.2lf\n", p1.hei);

	return 0;

}