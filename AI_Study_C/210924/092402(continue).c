#include <stdio.h>

int main(void) {

    // continue - �ݺ����� ó������
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;
        printf("%d ", i);
    }

    // Ȧ���� ��µ�
    // ¦���� continue�� ���� �ٽ� ���� �ö�

    return 0;

}