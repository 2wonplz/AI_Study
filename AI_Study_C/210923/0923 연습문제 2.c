#include <stdio.h>

int main(void) {

    double num1, num2;
    int i = 1;

    while (i <= 3) {
        printf("두 수를 입력하세요 : ");
        scanf_s("%lf %lf", &num1, &num2);

        printf("입력받은 두 수의 사칙연산 %d회\n", i);
        printf("%.1lf + %.1lf = %.1lf\n", num1, num2, (num1 + num2));
        printf("%.1lf - %.1lf = %.1lf\n", num1, num2, (num1 - num2));
        printf("%.1lf × %.1lf = %.1lf\n", num1, num2, (num1 * num2));
        printf("%.1lf ÷ %.1lf = %.1lf\n", num1, num2, (num1 / num2));
        printf("\n");

        i++;
    }

    return 0;

}