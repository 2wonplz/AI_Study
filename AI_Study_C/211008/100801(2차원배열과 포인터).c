#include <stdio.h>

int main() {

	int arr1[2][3] = {
		{ 10, 20, 30 },
		{ 40, 50, 60 }
	};
	//  2�� 3�� int�� 2�����迭 arr
	int arr2[2][4] = {
		{ 10, 20, 30, 40 },
		{ 50, 60, 70, 80 }
	};
	//  2�� 3�� int�� 2�����迭 arr

	printf("arr1 :        %p\n", arr1);
	printf("arr1[0] :     %p\n", arr1[0]);
	printf("arr1 + 1 :    %p\n", arr1 + 1);     //  +12 (�� ���� �ּҸ�ŭ)
	printf("arr1[0] + 1 : %p\n", arr1[0] + 1);  //  +4  (int �ϳ���ŭ)
	printf("\n");
	printf("arr2 :        %p\n", arr2);
	printf("arr2[0] :     %p\n", arr2[0]);
	printf("arr2 + 1 :    %p\n", arr2 + 1);     //  +16 (�� ���� �ּҸ�ŭ)
	printf("arr2[0] + 1 : %p\n", arr2[0] + 1);  //  +4  (int �ϳ���ŭ)

	return 0;

}