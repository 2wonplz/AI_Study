#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int random, count;
    int dice[6] = { 0, };
    double dice_per[6] = { 0, };

    srand(time(NULL));

    printf("�ֻ��� Ƚ�� : ");
    scanf_s("%d", &count);
    printf("\n");

    for (int i = 0; i <= count; i++) {
        random = rand() % 6 + 1;
        dice[random - 1]++;
    }

    for (int i = 0; i < 6; i++)
        dice_per[i] = ((double)dice[i] / count) * 100;

    for (int i = 0; i < 6; i++)
        printf("%d�� ���� Ƚ�� : %dȸ\n", (i + 1), dice[i]);

    printf("\n");

    for (int i = 0; i < 6; i++)
        printf("%d�� ���� Ȯ�� : %lf%%\n", (i + 1), dice_per[i]);


    return 0;

}