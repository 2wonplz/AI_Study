#include <stdio.h>

int main(void) {

    // break - �ݺ��� Ż��
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
        if (i == 3)
            break;  //  �ݺ��� 1���� Ż��
    }

    return 0;

}