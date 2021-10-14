#include <stdio.h>

void print_arr1(int, int, int);
void print_arr2(int[]);  //  int*

int main(void) {

	int arr[3] = { 10, 20, 30 };
	print_arr1(arr[0], arr[1], arr[2]);
	print_arr2(arr);
	// arr은 배열의 시작주소

	return 0;

}

void print_arr1(int n1, int n2, int n3) {

	printf("%d %d %d\n", n1, n2, n3);

}

void print_arr2(int param[]) {

	for (int i = 0; i <= 2; i++)
		printf("%d ", param[i]);

}