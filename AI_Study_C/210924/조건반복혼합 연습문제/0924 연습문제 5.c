#include <stdio.h>

int main(void) {

    int dan;

    printf("�������� ����� ���ڸ� �Է��ϼ��� : ");
    scanf_s("%d", &dan);

    if (0 < dan && dan <= 9) {
        for (int i = 1; i <= 9; i++)
            printf("%d X %d = %d\n", dan, i, (dan * i));
    }
    else {
        printf("�߸��� ���� �Է��Դϴ�.\n");
    }

    return 0;

}