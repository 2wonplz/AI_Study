#include <stdio.h>

int max(int, int, int);
int min(int, int, int);

int main(void) {

    int num1, num2, num3, big, small;

    printf("�� ���� ���� �Է��ϼ���.\n\n");
    
    printf("ù ��° �� �Է� : ");
    scanf_s("%d", &num1);
    printf("�� ��° �� �Է� : ");
    scanf_s("%d", &num2);
    printf("�� ��° �� �Է� : ");
    scanf_s("%d", &num3);

    big = max(num1, num2, num3);
    small = min(num1, num2, num3);

    printf("\n");
    printf("�Է��� �� �߿� ���� ū �� : %d\n", big);
    printf("�Է��� �� �߿� ���� ���� �� : %d\n", small);

    return 0;

}

int max(int num1, int num2, int num3) {

    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;

}

int min(int num1, int num2, int num3) {

    if (num1 <= num2 && num1 <= num3)
        return num1;
    else if (num2 <= num1 && num2 <= num3)
        return num2;
    else
        return num3;

}