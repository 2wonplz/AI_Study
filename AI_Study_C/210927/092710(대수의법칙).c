#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int random, count;
    int dice[7] = { 0, };  //  길이가 7인 int형 1차원배열 dice
    // 배열은 0번째부터 시작
    double dice_per[7] = { 0, };

    srand(time(NULL));

    printf("주사위 횟수 : ");
    scanf_s("%d", &count);

    for (int i = 1; i <= count; i++) {
        random = rand() % 6 + 1;
        dice[random]++;
    }

    for (int i = 1; i <= 6; i++)
        dice_per[i] = ((double)dice[i] / count) * 100;

    for (int i = 1; i <= 6; i++) {
        printf("%d의 횟수 : %d회\n", i, dice[i]);
        printf("%d의 확률 : %lf%%\n\n", i, dice_per[i]);
    }

    return 0;

}