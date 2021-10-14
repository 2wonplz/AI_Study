#include <stdio.h>

int main(void) {

    int tmp, up, down, temp = 20;

    for (temp; temp < 30; ) {

        printf("현재 온도 : %d\n", temp);
        printf("1. 온도증가\n");
        printf("2. 온도감소\n");
        scanf_s("%d", &tmp);
        printf("\n");

        if (tmp == 1) {
            printf("증가시킬 온도 입력 : ");
            scanf_s("%d", &up);
            temp += up;
            printf("\n");
        }
        else if (tmp == 2) {
            printf("감소시킬 온도 입력 : ");
            scanf_s("%d", &down);
            temp -= down;
            printf("\n");
        }
        else
            printf("잘못된 입력입니다.\n\n");

    }

    printf("현재 온도 : %d\n", temp);
    printf("난방기 종료\n");

    return 0;

}