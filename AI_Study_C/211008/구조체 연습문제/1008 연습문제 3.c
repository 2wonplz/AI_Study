#include <stdio.h>

struct person {
	char sx;
	char name[10];
	int age;
	double hei;
	double wei;
	char blood;
};

int main() {

	struct person p[3];
	double arr[3];

	for (int i = 0; i < 3; i++) {
		printf("%d번째 사람 입력\n", i + 1);
		printf("성별 입력 <M, P> : ");
		scanf_s("%c", &p[i].sx, sizeof(p[i].sx));
		printf("이름 입력 : ");
		scanf_s("%s", &p[i].name, sizeof(p[i].name));
		printf("나이 입력 : ");
		scanf_s("%d", &p[i].age);
		printf("키 입력 : ");
		scanf_s("%lf", &p[i].hei);
		printf("몸무게 입력 : ");
		scanf_s("%lf", &p[i].wei);
		getchar();
		printf("혈액형 입력 : ");
		scanf_s("%c", &p[i].blood, sizeof(p[i].blood));
		getchar();
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		if (p[i].sx == 'M')
			arr[i] = (p[i].hei / 100) * (p[i].hei / 100) * 22;
		else
			arr[i] = (p[i].hei / 100) * (p[i].hei / 100) * 21;
	}

	for (int i = 0; i < 3; i++) {
		printf("%s씨의 현재 체중은 %.1lfkg\n", p[i].name, p[i].wei);
		printf("표준 체중은 %.1lfkg\n", arr[i]);
		if (arr[i] > p[i].wei)
			printf("%.1lfkg 더 증량하세요\n\n", arr[i] - p[i].wei);
		else
			printf("%.1lfkg 더 감량하세요\n\n", p[i].wei - arr[i]);
	}

	return 0;

}