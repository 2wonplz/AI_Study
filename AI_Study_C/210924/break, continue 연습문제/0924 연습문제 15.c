#include <stdio.h>

int main(void) {

    int kor = 0, eng, math, sum, avg, i, kavg = 0, eavg = 0, mavg = 0;

    for (i = 1;; i++) {
        
        printf("%d��° �л��� ���� ���� ���� ���� �Է� : ", i);
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

            printf("���� ���� : %d\n", kor);
            printf("���� ���� : %d\n", eng);
            printf("���� ���� : %d\n", math);
            printf("���� : %d\n", sum);
            printf("��� : %d\n\n", avg);
        }

    }
    
    kavg = kavg / 3;
    eavg = eavg / 3;
    mavg = mavg / 3;

    printf("%d���� ���� ���� ��� : %d\n", i, kavg);
    printf("%d���� ���� ���� ��� : %d\n", i, eavg);
    printf("%d���� ���� ���� ��� : %d\n", i, mavg);

    return 0;

}