#include <stdio.h>

int main(void) {

    int kor = 0, eng, math, sum, avg, i, kavg = 0, eavg = 0, mavg = 0;

    for (i = 1;; i++) {
        
        printf("%d번째 학생의 국어 영어 수학 성적 입력 : ", i);
        scanf_s("%d %d %d", &kor, &eng, &math);
        printf("\n");

        if (kor == -1)
            break;
        else {
            sum = kor + eng + math;
            avg = sum / 3;
            kavg += kor;
            eavg += eng;
            mavg += math;

            printf("국어 성적 : %d\n", kor);
            printf("영어 성적 : %d\n", eng);
            printf("수학 성적 : %d\n", math);
            printf("총점 : %d\n", sum);
            printf("평균 : %d\n\n", avg);
        }

    }
    
    kavg = kavg / 3;
    eavg = eavg / 3;
    mavg = mavg / 3;

    printf("%d명의 국어 성적 평균 : %d\n", i, kavg);
    printf("%d명의 영어 성적 평균 : %d\n", i, eavg);
    printf("%d명의 수학 성적 평균 : %d\n", i, mavg);

    return 0;

}