#include <stdio.h>

// add �Լ� ����

// ��ȯ���� (return type) : int
int add(int n1, int n2) { 
        // �Ű����� (�μ�, �Ķ����) : n1, n2

    return n1 + n2;
    // n1 + n2 ���� ��ȯ�ض�
    // add �Լ��� ����ǰ� ����� �� n1 + n2
    // add �Լ��� ��ȯ�ϴ� ���� n1 + n2

}

int main(void) {

    int result = add(3, 4);  //  add �Լ� ȣ��
    // add �Լ��� ȣ���ϸ鼭 �Է����� 3�� 4�� �ش�
    printf("%d\n", result);  //  7

    return 0;

}