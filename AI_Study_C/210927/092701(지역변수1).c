#include <stdio.h>

int SimpleFuncOne(void);
int SimpleFuncTwo(void);

int main(void) {

    // �������� (local variable) - �Լ� ���ο��� ������ ����
    // �Լ� ���ο����� ���ٰ���
    // �Լ��� ����Ǹ� ���������� �Ҹ�ȴ�
    int num = 17;

    SimpleFuncOne();
    SimpleFuncTwo();

    printf("main num : %d\n", num);  //  17

    return 0;  //  main ���� num ���� �Ҹ�

}

int SimpleFuncOne(void) {

    int num = 10;
    
    num++;
    printf("SimpleFuncOne num : %d\n", num);  //  10

    return 0;  //  SimpleFuncOne ���� num ���� �Ҹ�

}

int SimpleFuncTwo(void) {

    int num1 = 20;
    int num2 = 30;

    num1++, num2--;
    printf("num1 & num2 : %d, %d\n", num1, num2);  //  21, 29

    return 0;  //  SimpleFuncTwo ���� num1, num2 ���� �Ҹ�

}