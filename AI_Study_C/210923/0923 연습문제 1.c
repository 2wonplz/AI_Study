#include <stdio.h>

int main(void) {

    int num = 1, sum = 0;

    while (num != 0) {
        printf("저금할 금액을 입력하세요 <0 입력 종료>\n");
        scanf_s("%d", &num);

        sum = num + sum;

        printf("현재까지의 저금액 %d\n\n", sum);
    }

    printf("저축 종료!\n");

    return 0;

}