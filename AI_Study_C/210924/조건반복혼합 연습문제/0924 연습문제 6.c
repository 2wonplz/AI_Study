#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("ũ�⸦ ���� �� ���ڸ� �Է��ϼ��� : ");
    scanf_s("%d %d", &num1, &num2);

    if (num1 < num2)
        printf("%d��(��) %d���� �� �۽��ϴ�.\n", num1, num2);
    else if (num1 > num2)
        printf("%d��(��) %d���� �� Ů�ϴ�.\n", num1, num2);
    else
        printf("%d�� %d�� �����ϴ�.\n", num1, num2);


    return 0;

}