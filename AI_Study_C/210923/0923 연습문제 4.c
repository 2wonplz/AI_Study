#include <stdio.h>

int main(void) {

    int temp = 0, sum = 0;

    printf("�µ��� 30���� ������ ����Ǵ� ���� ���α׷� �Դϴ�.\n\n");

    while (sum <= 30) {
        printf("���� ������ �µ��� �Է��ϼ��� : ");
        scanf_s("%d", &temp);

        sum = sum + temp;

        printf("���� �µ� : %d\n\n", sum);
    }

    printf("����� ����.");

    return 0;

}