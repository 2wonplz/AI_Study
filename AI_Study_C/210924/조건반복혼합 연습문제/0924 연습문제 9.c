#include <stdio.h>

int main(void) {

    char sx;
    double cm, kg, gkg, m, bmi;

    printf("����(M, F)�� Ű(cm), ������(kg)�� �Է��ϼ��� : ");
    scanf_s("%c %lf %lf", &sx, sizeof(sx), &cm, &kg);

    switch (sx) {
    case 'M' :
    case 'm' :
        gkg = (cm - 100) * 0.9;
        m = cm / 100;
        bmi = kg / (m * m);
        printf("����� ���� ü���� %.3lf �Դϴ�.\n", gkg);
        printf("����� Ű�� ü�߿��� BMI������ %.3lf �Դϴ�.\n", bmi);
        break;
    case 'F':
    case 'f':
        gkg = (cm - 100) * 0.85;
        m = cm / 100;
        bmi = kg / (m * m);
        printf("����� ���� ü���� %.3lf �Դϴ�.\n", gkg);
        printf("����� Ű�� ü�߿��� BMI������ %.3lf �Դϴ�.\n", bmi);
        break;
    }

    return 0;

}