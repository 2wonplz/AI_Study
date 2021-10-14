#include <stdio.h>

int main(void) {

    int dan;

    printf("구구단을 출력할 숫자를 입력하세요 : ");
    scanf_s("%d", &dan);

    if (0 < dan && dan <= 9) {
        for (int i = 1; i <= 9; i++)
            printf("%d X %d = %d\n", dan, i, (dan * i));
    }
    else {
        printf("잘못된 숫자 입력입니다.\n");
    }

    return 0;

}