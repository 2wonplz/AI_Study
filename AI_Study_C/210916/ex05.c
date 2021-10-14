#include <stdio.h>

int main(void) {
    
    //변수 - variable
    //변할수있는 값이 저장되는 메모리 공간
    //상수 - constant
    //변할수없는 값이 저장되는 메모리 공간
    
    int num1 = 10;
    //int(정수)형 변수 num1을 선언하고 10으로 초기화
    //변수는 메모리 공간에 만들어진다
    // = : 대입 연산자 (같다 X)
    // A = B : B의 값을 A의 공간에 넣겠다
    printf("num1 : %d\n", num1);  //num1 : 10
    num1 = 20;  //num1 변수에 20을 넣겠다
    printf("num1 : %d\n", num1);  //num1 : 20
    
    return 0;
    
}