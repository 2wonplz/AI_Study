#include <stdio.h>

int multip(int, int);

int main(void) {

    int num1 = 0, num2 = 0, i, result;

    for (i = 0;;i++) {

        printf("두 개의 숫자 입력 : ");
        scanf_s("%d %d", &num1, &num2);
        
        if (num1 == 0 && num2 == 0)
            break;
        else {
            result = multip(num1, num2);
            printf("연산 결과 : %d\n\n", result);
        }

    }

    printf("총 %d회 연산\n", i);

    return 0;

}

int multip(int num1, int num2) { return num1 * num2; }