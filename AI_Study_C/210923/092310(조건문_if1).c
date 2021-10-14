#include <stdio.h>

int main(void) {

    // if
    // if ~ else
    // if ~ else if ~ else
    int age;
    printf("나이 입력 : ");
    scanf_s("%d", &age);

    if (age >= 20) {
        // age가 20 이상이라면
        printf("성인!\n");
    } else {  //  이외의 나머지
        printf("미성년자!\n");
    }

    return 0;

}