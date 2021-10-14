#include <stdio.h>

int main(void) {

    // 반복문의 3요소
    // 1. 초기식  2. 조건식  3. 증감식

    // while 반복문
    // while : ~하는 동안

    int num = 1;  //  초기식

    while (num <= 3)  //  조건식 - num이 3 이하인 동안
    {
        printf("Hello : %d\n", num);
        num++;  //  증감식
    }

    return 0;

}