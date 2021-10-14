#include <stdio.h>

int main(void) {

    int updown, up, down, speed = 0;

    while (speed < 100) {

        printf("1. 증가\n");
        printf("2. 감소\n");
        scanf_s("%d", &updown);
        printf("\n");

        if (updown == 1) {
            printf("증가할 속력 입력 : ");
            scanf_s("%d", &up);
            speed += up;
            printf("현재 속력 : %d\n\n", speed);
        }
        else if (updown == 2) {
            printf("감소할 속력 입력 : ");
            scanf_s("%d", &down);
            speed -= down;
            printf("현재 속력 : %d\n\n", speed);
        }
        else {
            printf("잘못된 입력입니다.\n");
        }

    }

    printf("과속으로 벌금 10만원 부과\n");

    return 0;

}