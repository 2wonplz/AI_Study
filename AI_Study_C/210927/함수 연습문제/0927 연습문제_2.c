#include <stdio.h>

double C_to_F(double);
double F_to_C(double);

int main(void) {

    int i;
    double num, temp;

    printf("1. �����µ����� ȭ���µ���\n");
    printf("2. ȭ���µ����� �����µ���\n");
    scanf_s("%d", &i);

    switch (i) {
    
    case 1 :
        printf("���� �µ� �Է� : ");
        scanf_s("%lf", &num);
        temp = C_to_F(num);
        printf("��ȯ�� ȭ���� %.1lf", temp);
        break;
    case 2 :
        printf("ȭ�� �µ� �Է� : ");
        scanf_s("%lf", &num);
        temp = F_to_C(num);
        printf("��ȯ�� ������ %.1lf", temp);
        break;
    default :
        printf("�߸��� �Է°��Դϴ�.\n");
    
    }

    return 0;

}

double C_to_F(double num) { return num * 1.8 + 32; }

double F_to_C(double num) { return (num - 32) / 1.8; }