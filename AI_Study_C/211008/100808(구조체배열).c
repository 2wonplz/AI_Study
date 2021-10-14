#include <stdio.h>

struct person {
	char name[10];
	int age;
	double hei;
};

int main() {

	// 길이가 100인 struct person타입 배열 p
	struct person p[100];

	for (int i = 0; i <= 2; i++) {
		printf("%d번째 사람 정보 입력\n", i + 1);
		printf("이름 입력 : ");
		scanf_s("%s", &p[i].name, sizeof(p[i].name));
		printf("나이 입력 : ");
		scanf_s("%d", &p[i].age);
		printf("키   입력 : ");
		scanf_s("%lf", &p[i].hei);
	}

	for (int i = 0; i <= 2; i++) {
		printf("\n%d번째 사람 정보\n", i + 1);
		printf("이름 : %s\n", p[i].name);
		printf("나이 : %d\n", p[i].age);
		printf("키   : %.2lf\n", p[i].hei);
	}

	return 0;

}