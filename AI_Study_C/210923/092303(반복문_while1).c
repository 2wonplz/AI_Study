#include <stdio.h>

int main(void) {

    // �ݺ����� 3���
    // 1. �ʱ��  2. ���ǽ�  3. ������

    // while �ݺ���
    // while : ~�ϴ� ����

    int num = 1;  //  �ʱ��

    while (num <= 3)  //  ���ǽ� - num�� 3 ������ ����
    {
        printf("Hello : %d\n", num);
        num++;  //  ������
    }

    return 0;

}