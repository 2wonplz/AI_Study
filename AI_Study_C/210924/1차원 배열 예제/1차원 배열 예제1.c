#include <stdio.h>
#define N 20

int main(void) {

    char name[N] = "";
    int age = 100;

    printf("이름을 입력하세요 : ");
    scanf_s("%s", name, sizeof(name));
    printf("나이를 입력하세요 : ");
    scanf_s("%d", &age);

    printf("%s는(은) %d 살입니다.\n", name, age);

    return 0;

}