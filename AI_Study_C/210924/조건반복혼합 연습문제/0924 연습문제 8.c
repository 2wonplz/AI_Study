#include <stdio.h>

int main(void) {

    char sx;
    double hei, Mh = 175.2, Fh = 162.5;

    printf("성별과 키를 입력하세요 : ");
    scanf_s("%c %lf", &sx, sizeof(sx), &hei);

    switch (sx) {
    case 'M' :
    case 'm' :
        if (hei < Mh)
            printf("당신의 키는 남자 평균 키보다 %.2lfcm만큼 작습니다.\n", (Mh - hei));
        else if (hei > Mh)
            printf("당신의 키는 남자 평균 키보다 %.2lfcm만큼 큽니다.\n", (hei - Mh));
        else
            printf("당신의 키는 남자 평균 키와 같습니다.\n");
        break;
    case 'F' :
    case 'f' :
        if (hei < Fh)
            printf("당신의 키는 여자 평균 키보다 %.2lfcm만큼 작습니다.\n", (Fh - hei));
        else if (hei > Fh)
            printf("당신의 키는 여자 평균 키보다 %.2lfcm만큼 큽니다.\n", (hei - Fh));
        else
            printf("당신의 키는 여자 평균 키와 같습니다.\n");
        break;
    default :
        printf("잘못된 성별 입력입니다.");

    }

    return 0;

}