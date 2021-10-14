#include <stdio.h>

int main(void) {
    
    int dan = 7, i = 1;

    // for 반복문
    // for문 구구단
    //  초기식  조건식  증감식
    for (i = 1; i <= 9; i++) {
        printf("%d X %d = %d\n", dan, i, (dan * i));  //  내부 실행식
    }
    // 초기식, 조건식, 내부실행식, 증감식
    // 조건식, 내부실행식, 증감식
    // 조건식, 내부실행식, 증감식
    // .....

    // while : 사용자 입력받아서 수행
    // for : 횟수가 딱 정해져있는건 for문이 좋다

    return 0;

}