#include <stdio.h>

// ����ü�� ����� ���� �ڷ���
// struct Ű����
// structure -> struct
// struct pointŸ���� �ڷ��� ����
struct point {
	int x;
	int y;
};

int main() {

	struct point p;
	// struct pointŸ�� ���� p
	// point����ü ���� p
	p.x = 10;
	p.y = 20;
	printf("(%d, %d)\n", p.x, p.y);

	return 0;

}