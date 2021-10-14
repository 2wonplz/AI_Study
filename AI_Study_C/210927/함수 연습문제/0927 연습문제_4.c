#include <stdio.h>

void Bank(int);

int main(void) {

    int n;

    while (1) {

        printf("저금할 금액 입력 : ");
        scanf_s("%d", &n);

        if (n == -1)
            break;
        else
            Bank(n);

    }

    printf("입금 완료.");

    return 0;

}

void Bank(int n) {

    static int total;

    total += n;

    printf("현재까지의 저금액 : %d원\n\n", total);

}