#include <stdio.h>

int main() {

	int arr1[2][3] = {
		{ 10, 20, 30 },
		{ 40, 50, 60 }
	};
	//  2행 3열 int형 2차원배열 arr
	int arr2[2][4] = {
		{ 10, 20, 30, 40 },
		{ 50, 60, 70, 80 }
	};
	//  2행 3열 int형 2차원배열 arr

	printf("arr1 :        %p\n", arr1);
	printf("arr1[0] :     %p\n", arr1[0]);
	printf("arr1 + 1 :    %p\n", arr1 + 1);     //  +12 (한 행의 주소만큼)
	printf("arr1[0] + 1 : %p\n", arr1[0] + 1);  //  +4  (int 하나만큼)
	printf("\n");
	printf("arr2 :        %p\n", arr2);
	printf("arr2[0] :     %p\n", arr2[0]);
	printf("arr2 + 1 :    %p\n", arr2 + 1);     //  +16 (한 행의 주소만큼)
	printf("arr2[0] + 1 : %p\n", arr2[0] + 1);  //  +4  (int 하나만큼)

	return 0;

}