#include <stdio.h>

// �������� (global variable) : �Լ� �ܺο� ������ ����
// ���α׷��� ����Ǿ� �Ҹ�

void Add(int val);
int num;  //  ���������� �⺻ 0���� �ʱ�ȭ��

int main(void) {

    printf("num : %d\n", num);  //  0

    Add(3);

    printf("num : %d\n", num);  //  3

    num++;  //  �������� num�� �� 1 ����

    printf("num : %d\n", num);  //  4

    return 0;

}

void Add(int val) { num += val; }  //  �������� num�� ���� val��ŭ ����