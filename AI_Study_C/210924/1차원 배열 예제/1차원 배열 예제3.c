#include <stdio.h>

int main(void) {

    int arr[10];
    int i, avg = 0;

    for (i = 0; i < 10; i++) {
        printf("%d��° �л��� ������? ", i + 1);
        scanf_s("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
        avg = avg + arr[i];

    avg = avg / 10;

    printf("��ü �л��� ����� %d\n", avg);

    for (i = 0; i < 10; i++) {
        printf("�л� %d : ", i + 1);
        if (arr[i] >= avg)
            printf("�հ�\n");
        else
            printf("���հ�\n");
    }

    return 0;

}