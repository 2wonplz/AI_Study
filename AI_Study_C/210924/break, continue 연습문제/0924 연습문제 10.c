#include <stdio.h>

int main(void) {

    int i = 1, sum = 0;

    for (i; i <= 100; i++) {
        
        sum += i;
        printf("%d ����\n", i);
        printf("���� ���� %d\n\n", sum);

        if (sum > 100)
            break;
    }

    printf("���� ���� %d\n", sum);
    printf("Ż�� ���� ���� ���� : %d\n", i);

    return 0;

}