#include <stdio.h>

int main(void) {

    int updown, up, down, speed = 0;

    while (speed < 100) {

        printf("1. ����\n");
        printf("2. ����\n");
        scanf_s("%d", &updown);
        printf("\n");

        if (updown == 1) {
            printf("������ �ӷ� �Է� : ");
            scanf_s("%d", &up);
            speed += up;
            printf("���� �ӷ� : %d\n\n", speed);
        }
        else if (updown == 2) {
            printf("������ �ӷ� �Է� : ");
            scanf_s("%d", &down);
            speed -= down;
            printf("���� �ӷ� : %d\n\n", speed);
        }
        else {
            printf("�߸��� �Է��Դϴ�.\n");
        }

    }

    printf("�������� ���� 10���� �ΰ�\n");

    return 0;

}