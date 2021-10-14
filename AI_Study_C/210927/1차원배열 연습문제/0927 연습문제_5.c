#include <stdio.h>

int main(void) {

    int arr[8] = { 0, };
    int i;

    printf("숫자를 하나 입력하세요 : ");
    scanf_s("%d", &i);

    for (int j = 0; j <= 8; j++)
        printf("arr[%d] = %d\n", j, i * (j + 1));

    return 0;

}
