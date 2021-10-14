#include <stdio.h>

int main(void) {

    // break - 반복문 탈출
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
        if (i == 3)
            break;  //  반복문 1개만 탈출
    }

    return 0;

}