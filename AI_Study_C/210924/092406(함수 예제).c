#include <stdio.h>

int add(int num1, int num2) { return num1 + num2; }  //  �������� O, ��ȯ�� O

void ShowAddResult(int num) { printf("������� ��� : %d\n", num); }  //  �������� O, ��ȯ�� X

int ReadNum(void) {  //  �������� X, ��ȯ�� O

    int num;
    scanf_s("%d", &num);
    return num;

}

void HowToUseThisProg(void) {  //  �������� X, ��ȯ�� X

    printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
    printf("��! �׷� �� ���� ������ �Է��ϼ���.\n");

}

int main(void) {

    int result, num1, num2;

    HowToUseThisProg();

    num1 = ReadNum();
    num2 = ReadNum();
    result = add(num1, num2);

    ShowAddResult(result);

    return 0;

}