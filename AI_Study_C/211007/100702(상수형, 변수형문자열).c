#include <stdio.h>

int main() {

	int n1 = 10;
	int n2 = 20;
	int n3 = 30;
	int* ptr[3] = { &n1, &n2, &n3 };
	// ���̰� 3�� int�� ������ �迭

	printf("%p\n", ptr[0]);
	printf("%p\n", ptr[1]);
	printf("%p\n", ptr[2]);
	printf("\n%d\n", *ptr[0]);
	printf("%d\n", *ptr[1]);
	printf("%d\n", *ptr[2]);

	return 0;

}