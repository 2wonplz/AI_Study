#include <stdio.h>

// add 함수 정의

// 반환형태 (return type) : int
int add(int n1, int n2) { 
        // 매개변수 (인수, 파라미터) : n1, n2

    return n1 + n2;
    // n1 + n2 값을 반환해라
    // add 함수가 종료되고 남기는 값 n1 + n2
    // add 함수가 반환하는 값이 n1 + n2

}

int main(void) {

    int result = add(3, 4);  //  add 함수 호출
    // add 함수를 호출하면서 입력으로 3과 4를 준다
    printf("%d\n", result);  //  7

    return 0;

}