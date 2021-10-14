#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int man, com, power;
    double w = 0, d = 0, l = 0;

    srand(time(NULL));

    while (1) {

        printf("1. 가위  2. 바위  3. 보  :  ");
        scanf_s("%d", &man);
        com = rand() % 3 + 1;

        printf("\n");
        if (man > 3 || man < 1) {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
            continue;
        }

        printf("나 : ");
        switch (man) {
        case 1 :
            printf("가위\n");
            break;
        case 2 :
            printf("바위\n");
            break;
        case 3 :
            printf("보\n");
            break;
        }

        printf("컴퓨터 : ");
        switch (com) {
        case 1:
            printf("가위\n");
            break;
        case 2:
            printf("바위\n");
            break;
        case 3:
            printf("보\n");
            break;
        }

        if (man == com) {
            d++;
            printf("무승부!  %.lf승 %.lf무 %.lf패\n", w, d, l);
            printf("현재 승률 : %.2lf%%\n\n", (w / (w + d + l)) * 100);
        }
        else if (man == 1 && com == 2) {
            l++;
            printf("패배!   %.lf승 %.lf무 %.lf패\n", w, d, l);
            printf("현재 승률 : %.2lf%%\n\n", (w / (w + d + l)) * 100);
        }
        else if (man == 1 && com == 3) {
            w++;
            printf("승리!   %.lf승 %.lf무 %.lf패\n", w, d, l);
            printf("현재 승률 : %.2lf%%\n\n", (w / (w + d + l)) * 100);
        }
        else if (man == 2 && com == 1) {
            w++;
            printf("승리!   %.lf승 %.lf무 %.lf패\n", w, d, l);
            printf("현재 승률 : %.2lf%%\n\n", (w / (w + d + l)) * 100);
        }
        else if (man == 2 && com == 3) {
            l++;
            printf("패배!   %.lf승 %.lf무 %.lf패\n", w, d, l);
            printf("현재 승률 : %.2lf%%\n\n", (w / (w + d + l)) * 100);
        }
        else if (man == 3 && com == 1) {
            l++;
            printf("패배!   %.lf승 %.lf무 %.lf패\n", w, d, l);
            printf("현재 승률 : %.2lf%%\n\n", (w / (w + d + l)) * 100);
        }
        else {
            w++;
            printf("승리!   %.lf승 %.lf무 %.lf패\n", w, d, l);
            printf("현재 승률 : %.2lf%%\n\n", (w / (w + d + l)) * 100);
        }

        printf("종료하시겠습니까?\n 1. 예  2. 아니오 : ");
        scanf_s("%d", &power);

        if (power == 1)
            break;
        else {
            printf("\n");
            continue;
        }

    }

    printf("\n\n총 전적 : %.lf승 %.lf무 %.lf패, 승률 %.2lf%%\n", w, d, l, (w / (w + d + l)) * 100);

    return 0;

}
