#include <stdio.h>

int main(void) {

    int vir, tim, i = 1;

    printf("�ʱ� ���� ���� ��� �ð��� �Է��ϼ��� : ");
    scanf_s("%d %d", &vir, &tim);

    do {
        vir *= 2;
        printf("%d�ð� ��� �� ���� �� : %d\n", i, vir);
        i++;
    } while (i <= tim);

    return 0;

}