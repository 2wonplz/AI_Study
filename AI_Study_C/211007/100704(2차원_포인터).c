#include <stdio.h>

int main() {

	int n = 10;
	int* ptr = &n;
	int** dptr = &ptr;

	printf("%d %d\n", **dptr, n);   //  10 10
	printf("%p %p\n", *dptr, ptr);  //  같은 주소값
	printf("%p %p\n", *dptr, &n);   //  같은 주소값

	return 0;

}
