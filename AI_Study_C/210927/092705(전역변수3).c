#include <stdio.h>

double cir(double r);
double area(double r);
const double pi = 3.14;
// �� constant : ��� (�׻� ������)

int main(void) {

    double rad = 0;

    printf("������ �Է� : ");
    scanf_s("%lf", &rad);

    cir(rad);
    area(rad);

    return 0;

}

double cir(double r) { return 2 * pi * r; }

double area(double r) { return pi * r * r; }