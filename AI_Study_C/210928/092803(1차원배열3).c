#include <stdio.h>

int main(void) {

	char arr[3] = { 0, };
	// ���̰� 3�� char�� 1�����迭 arr

	arr[0] = 'A';
	arr[1] = 'B';
	arr[2] = 'C';

	for (int i = 0; i < 3; i++)
		printf("%c\n", arr[i]);

	return 0;

}