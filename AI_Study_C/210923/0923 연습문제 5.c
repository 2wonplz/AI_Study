#include <stdio.h>

int main(void) {

    int num, i = 1;

    printf("����� ����� ���ڸ� �Է��ϼ��� : ");
    scanf_s("%d", &num);

    while (i <= 10) {
        printf("%d * %d = %d\n", num, i, (num * i));
        i++;
    }

    return 0;

}