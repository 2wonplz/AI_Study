#include <stdio.h>

int main(void) {

	int arr[9] = { 0, };
	int dan;

	printf("╢э ют╥б : ");
	scanf_s("%d", &dan);

	for (int i = 0; i < 9; i++)
		arr[i] = dan * (i + 1);

	for (int i = 0; i < 9; i++)
		printf("%d X %d = %d\n", dan, (i + 1), arr[i]);

	return 0;

}