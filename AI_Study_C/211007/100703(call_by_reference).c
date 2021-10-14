#include <stdio.h>

//  Call-By-Value : 값에 의한 호출 (함수를 호출하면서 값을 전달)
//  Call-By-Reference : 레퍼런스(참조)에 의한 호출 (함수를 호출하면서 주소를 전달)

void swap(int*, int*);

int main() {

	int n1 = 10;
	int n2 = 20;
	
	printf("n1 : %d, n2 : %d\n", n1, n2);

	swap(&n1, &n2);

	printf("n1 : %d, n2 : %d\n", n1, n2);

	return 0;

}

void swap(int* ptr1, int* ptr2) {

	// int* ptr1 = &n1, int* ptr = &n2
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

}
