#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("�� ���� ���ڸ� �Է��ϼ��� : ");
    scanf_s("%d %d", &num1, &num2);

    for (; num1 < num2; num1++) {

        for (int i = 1; i <= 3; i++) {
        
            if (num1 % 2 == 1)
                printf("%d X %d = %d\n", num1, i, (num1 * i));
            else
                continue;
        }

        printf("\n");

    }

    return 0;

}