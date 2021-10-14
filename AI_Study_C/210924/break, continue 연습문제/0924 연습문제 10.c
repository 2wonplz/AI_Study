#include <stdio.h>

int main(void) {

    int i = 1, sum = 0;

    for (i; i <= 100; i++) {
        
        sum += i;
        printf("%d 더함\n", i);
        printf("누적 합은 %d\n\n", sum);

        if (sum > 100)
            break;
    }

    printf("누적 합은 %d\n", sum);
    printf("탈출 직전 더한 숫자 : %d\n", i);

    return 0;

}