#include <stdio.h>

int main(void) {

    int num = 1;

    if (num == 1) {
        int num = 7;
        num += 10;
        printf("if문 내 지역변수 num : %d\n", num);  //  17
    }  //  if문 내의 num 변수 소멸

    printf("main함수 내 지역변수 num : %d\n", num);  //  1

    return 0;

}