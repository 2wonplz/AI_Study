#include <stdio.h>

int main(void) {

    int vir, tim, i = 1;

    printf("초기 세균 수와 경과 시간을 입력하세요 : ");
    scanf_s("%d %d", &vir, &tim);

    do {
        vir *= 2;
        printf("%d시간 경과 후 세균 수 : %d\n", i, vir);
        i++;
    } while (i <= tim);

    return 0;

}