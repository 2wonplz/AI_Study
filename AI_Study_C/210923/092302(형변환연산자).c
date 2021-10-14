#include <stdio.h>

int main(void) {
    
    // 형변환 (type conversion)
    // 자동 형변환 (암묵적 형변환)
    // 강제 형변환 (명시적 형변환)
    double num = 3 + 3.14;
    // 피연산자의 불일치 -> 자동 형변환 발생
    // 정수 3이 실수로 자동 형변환
    printf("%lf\n", num);

    int num1 = 3, num2 = 4;
    double result = (double)num1 / num2;
    // (double)num1 - num1을 double로 형변환해라
    // double result = 3.000000 / 4; - 피연산자 불일치 -> 자동 형변환 발생
    // double result = 3.000000 / 4.000000;
    printf("%lf\n", result);  //  0.750000

    return 0;

}