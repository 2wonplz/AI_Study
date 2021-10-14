#include <stdio.h>

int main(void) {

    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1)
            sum += i;
        else
            continue;
    }

    printf("1에서 100까지의 홀수 합 : %d", sum);

    return 0;

}