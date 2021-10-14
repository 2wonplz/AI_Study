#include <stdio.h>

int main(void) {

    int KOR, ENG, MATH, AVG, i = 1;

    while (i <= 3) {
        printf("국어 영어 수학 성적 입력 : ");
        scanf_s("%d %d %d", &KOR, &ENG, &MATH);

        AVG = (KOR + ENG + MATH) / 3;

        printf("(%d번째) 국어 영어 수학 성적 평균 %d\n\n", i, AVG);

        i++;
    }

    return 0;

}