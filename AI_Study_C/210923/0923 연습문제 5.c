#include <stdio.h>

int main(void) {

    int num, i = 1;

    printf("배수를 출력할 숫자를 입력하세요 : ");
    scanf_s("%d", &num);

    while (i <= 10) {
        printf("%d * %d = %d\n", num, i, (num * i));
        i++;
    }

    return 0;

}