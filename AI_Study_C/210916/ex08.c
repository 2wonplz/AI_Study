#include <stdio.h>

int main(void) {
    
    //사칙연산자
    //+, -, *, /
    
    int num1 = 9;
    int num2 = 2;
    
    printf("%d + %d = %d\n", num1, num2, (num1+num2));
    //9 + 2 = 11
    printf("%d - %d = %d\n", num1, num2, (num1-num2));
    //9 - 2 = 7
    printf("%d * %d = %d\n", num1, num2, (num1*num2));
    //9 * 2 = 18
    printf("%d / %d = %d\n", num1, num2, (num1/num2));
    //9 / 2 = 4
    //정수 나누기 정수의 결과는 정수다
    
    return 0;
    
}