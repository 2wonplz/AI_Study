#include <stdio.h>

// 구조체는 사용자 정의 자료형
// struct 키워드
// structure -> struct
// struct point타입의 자료형 정의
struct point {
	int x;
	int y;
};

int main() {

	struct point p;
	// struct point타입 변수 p
	// point구조체 변수 p
	p.x = 10;
	p.y = 20;
	printf("(%d, %d)\n", p.x, p.y);

	return 0;

}