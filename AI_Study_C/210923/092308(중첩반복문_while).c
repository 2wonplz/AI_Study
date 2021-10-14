#include <stdio.h>

int main(void) {

    int dan = 2, i = 1;

    // while문 중첩
    while (dan <= 9) {  //  외부 while문
        i = 1;
        while (i <= 9) {  //  내부 while문
            printf("%d X %d = %d\n", dan, i, (dan * i));
            i++;
        }
        printf("\n");
        dan++;
    }

    return 0;

}