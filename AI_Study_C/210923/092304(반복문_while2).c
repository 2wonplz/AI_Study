#include <stdio.h>

int main(void) {

    int dan = 7, i = 1;

    while (i <= 9) {
        printf("%d X %d = %d\n", dan, i, (dan * i));
        i++;
    }

    // debug - ����� (���׸� �����ϴ�)
    // de : ��Ż, ������ ���λ�
    // bug : ����, ����
    // ��ǻ�Ϳ��� ������ ������ ����Ų�� ����
    // debugging : ����׸� �ϴ� ��, ���׸� �����ϴ� ��

    return 0;

}