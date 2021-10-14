#include <stdio.h>

int main(void) {

    double arr[12] = { 0, };
    double sum = 0, tmp;

    for (int i = 1; i <= 12; i++) {
        
        printf("%d번째 온도 측정 : ", i);
        scanf_s("%lf", &tmp);

        arr[i - 1] = tmp;
        sum += tmp;

    }

    printf("12번 측정한 온도의 평균 : %.2lf", sum / 12);

    return 0;

}