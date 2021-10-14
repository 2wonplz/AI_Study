#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("두 개의 숫자를 입력하세요 : ");
    scanf_s("%d %d", &num1, &num2);

    for (; num1 < num2; num1++) {

        for (int i = 1; i <= 3; i++) {
        
            if (num1 % 2 == 1)
                printf("%d X %d = %d\n", num1, i, (num1 * i));
            else
                continue;
        }

        printf("\n");

    }

    return 0;

}