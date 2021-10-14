#include <stdio.h>

int main(void) {

    int i = 4;

    // do ~ while 반복문
    do {
        printf("Hello : %d\n", i);
        i++;
    } while (i <= 3);
    // while : 선검사 후실행
    // do ~ while : 선실행 후검사
    // do ~ while : 무조건 1회 이상 실행
    // ㄴ 무조건 사용자 입력을 1번 이상 받아야된다면

    return 0;

}