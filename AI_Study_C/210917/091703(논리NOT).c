#include <stdio.h>
#include <stdbool.h>

int main(void) {

	//��������
	//�� NOT
	// �� ����, �ƴϴ�
	// !0 : 1
	// !1 : 0
	// !false : 1
	// !true : 0
	printf("%d\n", !0);  // 1
	printf("%d\n", !1);  // 0
	printf("\n");
	printf("%d\n", !false);  // 1
	printf("%d\n", !true);   // 0

	return 0;

}