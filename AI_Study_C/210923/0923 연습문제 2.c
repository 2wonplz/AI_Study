#include <stdio.h>

int main(void) {

    double num1, num2;
    int i = 1;

    while (i <= 3) {
        printf("�� ���� �Է��ϼ��� : ");
        scanf_s("%lf %lf", &num1, &num2);

        printf("�Է¹��� �� ���� ��Ģ���� %dȸ\n", i);
        printf("%.1lf + %.1lf = %.1lf\n", num1, num2, (num1 + num2));
        printf("%.1lf - %.1lf = %.1lf\n", num1, num2, (num1 - num2));
        printf("%.1lf �� %.1lf = %.1lf\n", num1, num2, (num1 * num2));
        printf("%.1lf �� %.1lf = %.1lf\n", num1, num2, (num1 / num2));
        printf("\n");

        i++;
    }

    return 0;

}