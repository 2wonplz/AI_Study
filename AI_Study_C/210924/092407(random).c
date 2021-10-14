#include <stdio.h>
#include <stdlib.h>  //  rand() 함수 포함된 라이브러리
#include <time.h>  //  time() 함수 포함된 라이브러리

int main(void) {

    // rand 함수
    int random;
    srand(time(NULL));  //  seed random

    for (int i = 0; i <= 10; i++) {
        random = rand();  //  rand 함수 호출
        printf("%d\n", random);
    }

    return 0;

}