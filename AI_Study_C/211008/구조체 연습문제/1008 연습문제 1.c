#include <stdio.h>

struct Employee {
	char name[10];
	int p_num;
	int y_pay;
};

int main() {

	struct Employee p;

	printf("종업원의 이름 입력 : ");
	scanf_s("%s", p.name, sizeof(p.name));
	printf("종업원의 주민등록번호 입력 : ");
	scanf_s("%d", &p.p_num);
	printf("종업원의 연봉 입력 : ");
	scanf_s("%d", &p.y_pay);

	printf("\n구조체에 저장된 값 출력\n");
	printf("이름 : %s\n", p.name);
	printf("주민등록번호 : %d\n", p.p_num);
	printf("연봉 : %d\n", p.y_pay);

	return 0;

}