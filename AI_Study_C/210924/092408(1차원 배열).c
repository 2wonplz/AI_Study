#include <stdio.h>
#include <stdlib.h>  //  rand() �Լ� ���Ե� ���̺귯��
#include <time.h>  //  time() �Լ� ���Ե� ���̺귯��

int main(void) {  //  �ֻ����� 10�� �������� �� ������ ���� Ƚ�� ����

    int arr[6] = { 0,0,0,0,0,0 };
    // ���̰� 6�� int�� 1���� �迭 arr
    // int�� 6�� ���尡���� ����

    int random;
    srand(time(NULL));

    for (int i = 1; i <= 10; i++) {
        random = rand() % 6 + 1;
        printf("%d\n", random);
        arr[random - 1]++;
    }

    printf("\n");
    for (int i = 0; i <= 5; i++)
        printf("%d ", arr[i]);

    return 0;

}