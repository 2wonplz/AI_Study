#include <stdio.h>

int main(void) {

    int dan = 2, i = 1;

    // while�� ��ø
    while (dan <= 9) {  //  �ܺ� while��
        i = 1;
        while (i <= 9) {  //  ���� while��
            printf("%d X %d = %d\n", dan, i, (dan * i));
            i++;
        }
        printf("\n");
        dan++;
    }

    return 0;

}