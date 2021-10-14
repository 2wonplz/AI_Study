#include <stdio.h>

int main(void) {

    int i, j, k;

    printf("가로와 세로의 길이 입력 : ");
    scanf_s("%d %d", &i, &j);
    k = i;

    while (j > 0) {
        i = k;
        while (i > 0) {
            printf("*");
            i--;
        }
        printf("\n");
        j--;
    }

    return 0;

}