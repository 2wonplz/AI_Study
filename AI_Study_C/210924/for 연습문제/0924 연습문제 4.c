#include <stdio.h>

int main(void) {

    int sum1, sum2 = 0;

    for (int dan = 2; dan <= 9; dan++) {

        sum1 = 0;

        for (int num = 1; num <= 9; num++) {
            printf("%d X %d = %d\n", dan, num, (dan * num));
            sum1 += (dan * num);
        }
        
        printf("%d���� �� : %d\n\n", dan, sum1);
        sum2 += sum1;
    }
    
    printf("��� ���� �� : %d", sum2);

    return 0;

}