#include <stdio.h>

struct Employee {
	char name[10];
	int p_num;
	int y_pay;
};

int main() {

	struct Employee p[3];

	for (int i = 0; i < 3; i++) {
		printf("%d번째\n", i + 1);
		printf("종업원의 이름 입력 : ");
		scanf_s("%s", p[i].name, sizeof(p[i].name));
		printf("종업원의 주민등록번호 입력 : ");
		scanf_s("%d", &p[i].p_num);
		printf("종업원의 연봉 입력 : ");
		scanf_s("%d", &p[i].y_pay);
		printf("\n");
	}

	printf("\n구조체 배열에 저장된 값 출력\n");
	for (int i = 0; i < 3; i++) {
		printf("%d번째 종업원\n", i + 1);
		printf("이름 : %s\n", p[i].name);
		printf("주민등록번호 : %d\n", p[i].p_num);
		printf("연봉 : %d\n", p[i].y_pay);
		printf("\n");
	}

	return 0;

}