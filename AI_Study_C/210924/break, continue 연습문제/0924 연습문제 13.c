#include <stdio.h>

int main(void) {

    int tmp, up, down, temp = 20;

    for (temp; temp < 30; ) {

        printf("���� �µ� : %d\n", temp);
        printf("1. �µ�����\n");
        printf("2. �µ�����\n");
        scanf_s("%d", &tmp);
        printf("\n");

        if (tmp == 1) {
            printf("������ų �µ� �Է� : ");
            scanf_s("%d", &up);
            temp += up;
            printf("\n");
        }
        else if (tmp == 2) {
            printf("���ҽ�ų �µ� �Է� : ");
            scanf_s("%d", &down);
            temp -= down;
            printf("\n");
        }
        else
            printf("�߸��� �Է��Դϴ�.\n\n");

    }

    printf("���� �µ� : %d\n", temp);
    printf("����� ����\n");

    return 0;

}