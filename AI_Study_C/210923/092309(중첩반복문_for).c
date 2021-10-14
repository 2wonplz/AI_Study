#include <stdio.h>

int main(void) {
    
    for (int dan = 2; dan <= 9; dan++) {  //  외부 for문
        for (int i = 1; i <= 9; i++) {  //  내부 for문
            printf("%d X %d = %d\n", dan, i, (dan * i));
        }
        printf("\n");
    }

    return 0;

}