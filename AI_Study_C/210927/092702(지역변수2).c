#include <stdio.h>

int main(void) {

    int num = 1;

    if (num == 1) {
        int num = 7;
        num += 10;
        printf("if�� �� �������� num : %d\n", num);  //  17
    }  //  if�� ���� num ���� �Ҹ�

    printf("main�Լ� �� �������� num : %d\n", num);  //  1

    return 0;

}