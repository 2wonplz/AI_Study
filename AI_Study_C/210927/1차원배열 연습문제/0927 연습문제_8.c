#include <stdio.h>
// #include <string.h>

int main(void) {

    char arr[100];
    int i;

    printf("���ڿ��� �Է��ϼ���.\n");
    scanf_s("%s", arr, sizeof(arr));

    for (i = 0; arr[i] != 0; i++) {}

//  i = strlen(arr);
    // string length : ���ڿ� ���� ���ϴ� �Լ�

    printf("\n���ڿ��� ���̴� %d\n", i);

    return 0;

}