#include <stdio.h>

int main(void) {
    
    //변수 variable
    
    float num1 = 3.14f;
    //float 변수 (4byte 실수 변수) num1을 선언하고
    //3.14f를 저장하겠다
    
    double num2 = 9.8;
    //double 변수 (8byte 실수 변수) num2를 선언하고
    //9.8을 저장하겠다
    
    printf("num1 : %f\n", num1);  //3.140000
    printf("num1 : %.2f\n", num1);  //3.14
    printf("num1 : %lf\n", num2);  //9.800000
    printf("num1 : %.1lf\n", num2);  //9.8
    
    return 0;
    
}