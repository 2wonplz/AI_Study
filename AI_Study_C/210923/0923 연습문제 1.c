#include <stdio.h>

int main(void) {

    int num = 1, sum = 0;

    while (num != 0) {
        printf("������ �ݾ��� �Է��ϼ��� <0 �Է� ����>\n");
        scanf_s("%d", &num);

        sum = num + sum;

        printf("��������� ���ݾ� %d\n\n", sum);
    }

    printf("���� ����!\n");

    return 0;

}