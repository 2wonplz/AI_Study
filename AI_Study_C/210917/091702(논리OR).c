#include <stdio.h>
#include <stdbool.h>

int main(void) {

	//�� ������
	//�� OR
	// �� �� ��, �Ǵ�, ����
	// 0 || 0 : 0
	// 0 || 1 : 1
	// 1 || 0 : 1
	// 1 || 1 : 1
	//0�� ������ �ǹ�
	//������ �� ����
	//��ǥ ������ 1
	printf("%d\n", 0 || 0);  // 0
	printf("%d\n", 0 || 1);  // 1
	printf("%d\n", 1 || 0);  // 1
	printf("%d\n", 1 || 1);  // 1
	printf("\n");
	printf("%d\n", false || false);  // 0
	printf("%d\n", false || true);   // 1
	printf("%d\n", true || false);   // 1
	printf("%d\n", true || true);    // 1

	return 0;

}