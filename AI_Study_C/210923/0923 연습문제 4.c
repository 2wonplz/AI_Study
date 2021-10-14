#include <stdio.h>

int main(void) {

    int temp = 0, sum = 0;

    printf("온도가 30도가 넘으면 종료되는 난방 프로그램 입니다.\n\n");

    while (sum <= 30) {
        printf("증가 감소할 온도를 입력하세요 : ");
        scanf_s("%d", &temp);

        sum = sum + temp;

        printf("현재 온도 : %d\n\n", sum);
    }

    printf("난방기 종료.");

    return 0;

}