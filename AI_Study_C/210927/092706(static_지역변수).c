#include <stdio.h>

void SimpleFunc(void);

int main(void) {

    int i;

    for (i = 0; i < 3; i++)
        SimpleFunc();

    return 0;

}

void SimpleFunc(void) {

    static int num1;  //  �ʱ�ȭ���� ������ 0 �ʱ�ȭ
    // �� ���α׷��� ����Ǿ� �Ҹ��
    // ���� 1ȸ�� ����ǰ�, �޸𸮿� ������
    // �Լ� ���ο����� ���ٰ����� ���������� Ư���� ����
    int num2 = 0;     //  �ʱ�ȭ���� ������ �����Ⱚ �ʱ�ȭ

    num1++, num2++;

    printf("static : %d, local : %d\n", num1, num2);

}  //  num1�� �����ְ�, num2�� �Ҹ�