#include <stdio.h>

int main(void) {

	int arr[3] = { 0, 1, 2 };
	
	printf("�迭�� �̸�  : %p\n", arr);
	// �迭�� �̸��� ����� ������(�ּ�)
	printf("ù ��° ��� : %p\n", &arr[0]);
	printf("�� ��° ��� : %p\n", &arr[1]);
	printf("�� ��° ��� : %p\n", &arr[2]);
	// �迭�� �̸��� �迭�� �����ּ�
	// �迭 0��° ������ �ּҿ� ����
	// arr == &arr[0]
	// �ּҰ��� 4�� (int : 4 byte) ���̳���

	return 0;

}