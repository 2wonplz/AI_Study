#include <stdio.h>
#define N 20

int main(void) {

    char name[N] = "";
    int age = 100;

    printf("�̸��� �Է��ϼ��� : ");
    scanf_s("%s", name, sizeof(name));
    printf("���̸� �Է��ϼ��� : ");
    scanf_s("%d", &age);

    printf("%s��(��) %d ���Դϴ�.\n", name, age);

    return 0;

}