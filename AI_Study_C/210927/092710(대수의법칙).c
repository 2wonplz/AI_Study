#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int random, count;
    int dice[7] = { 0, };  //  ���̰� 7�� int�� 1�����迭 dice
    // �迭�� 0��°���� ����
    double dice_per[7] = { 0, };

    srand(time(NULL));

    printf("�ֻ��� Ƚ�� : ");
    scanf_s("%d", &count);

    for (int i = 1; i <= count; i++) {
        random = rand() % 6 + 1;
        dice[random]++;
    }

    for (int i = 1; i <= 6; i++)
        dice_per[i] = ((double)dice[i] / count) * 100;

    for (int i = 1; i <= 6; i++) {
        printf("%d�� Ƚ�� : %dȸ\n", i, dice[i]);
        printf("%d�� Ȯ�� : %lf%%\n\n", i, dice_per[i]);
    }

    return 0;

}