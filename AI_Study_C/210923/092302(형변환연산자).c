#include <stdio.h>

int main(void) {
    
    // ����ȯ (type conversion)
    // �ڵ� ����ȯ (�Ϲ��� ����ȯ)
    // ���� ����ȯ (����� ����ȯ)
    double num = 3 + 3.14;
    // �ǿ������� ����ġ -> �ڵ� ����ȯ �߻�
    // ���� 3�� �Ǽ��� �ڵ� ����ȯ
    printf("%lf\n", num);

    int num1 = 3, num2 = 4;
    double result = (double)num1 / num2;
    // (double)num1 - num1�� double�� ����ȯ�ض�
    // double result = 3.000000 / 4; - �ǿ����� ����ġ -> �ڵ� ����ȯ �߻�
    // double result = 3.000000 / 4.000000;
    printf("%lf\n", result);  //  0.750000

    return 0;

}