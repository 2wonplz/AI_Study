#include <stdio.h>

// ����Լ� - �ٽ� ���ƿ��� �Լ�
void Recursive(int);

int main(void) {

    int num = 1;

    Recursive(num);

    return 0;

}

void Recursive(int num) {  //  ��������Լ�

    // �ڱ� �ڽ��� ���Ǿȿ�, �ڱ� �ڽ��� ȣ��
    printf("Recursive Call! : %d\n", num);
    Recursive(num + 1);

}