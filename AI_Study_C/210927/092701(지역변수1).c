#include <stdio.h>

int SimpleFuncOne(void);
int SimpleFuncTwo(void);

int main(void) {

    // 지역변수 (local variable) - 함수 내부에서 선언한 변수
    // 함수 내부에서만 접근가능
    // 함수가 종료되면 지역변수도 소멸된다
    int num = 17;

    SimpleFuncOne();
    SimpleFuncTwo();

    printf("main num : %d\n", num);  //  17

    return 0;  //  main 내의 num 변수 소멸

}

int SimpleFuncOne(void) {

    int num = 10;
    
    num++;
    printf("SimpleFuncOne num : %d\n", num);  //  10

    return 0;  //  SimpleFuncOne 내의 num 변수 소멸

}

int SimpleFuncTwo(void) {

    int num1 = 20;
    int num2 = 30;

    num1++, num2--;
    printf("num1 & num2 : %d, %d\n", num1, num2);  //  21, 29

    return 0;  //  SimpleFuncTwo 내의 num1, num2 변수 소멸

}