#include <stdio.h>

int multip(int, int);

int main(void) {

    int num1 = 0, num2 = 0, i, result;

    for (i = 0;;i++) {

        printf("�� ���� ���� �Է� : ");
        scanf_s("%d %d", &num1, &num2);
        
        if (num1 == 0 && num2 == 0)
            break;
        else {
            result = multip(num1, num2);
            printf("���� ��� : %d\n\n", result);
        }

    }

    printf("�� %dȸ ����\n", i);

    return 0;

}

int multip(int num1, int num2) { return num1 * num2; }