#include <stdio.h>

void Bank(int);

int main(void) {

    int n;

    while (1) {

        printf("������ �ݾ� �Է� : ");
        scanf_s("%d", &n);

        if (n == -1)
            break;
        else
            Bank(n);

    }

    printf("�Ա� �Ϸ�.");

    return 0;

}

void Bank(int n) {

    static int total;

    total += n;

    printf("��������� ���ݾ� : %d��\n\n", total);

}