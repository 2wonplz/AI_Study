#include <stdio.h>

int main(void) {

    // if
    // if ~ else
    // if ~ else if ~ else
    int age;
    printf("���� �Է� : ");
    scanf_s("%d", &age);

    if (age >= 20) {
        // age�� 20 �̻��̶��
        printf("����!\n");
    } else {  //  �̿��� ������
        printf("�̼�����!\n");
    }

    return 0;

}