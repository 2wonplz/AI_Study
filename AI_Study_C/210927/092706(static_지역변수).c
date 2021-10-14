#include <stdio.h>

void SimpleFunc(void);

int main(void) {

    int i;

    for (i = 0; i < 3; i++)
        SimpleFunc();

    return 0;

}

void SimpleFunc(void) {

    static int num1;  //  초기화하지 않으면 0 초기화
    // ㄴ 프로그램이 종료되야 소멸됨
    // 최초 1회만 선언되고, 메모리에 상주함
    // 함수 내부에서만 접근가능한 지역변수의 특성도 가짐
    int num2 = 0;     //  초기화하지 않으면 쓰레기값 초기화

    num1++, num2++;

    printf("static : %d, local : %d\n", num1, num2);

}  //  num1은 남아있고, num2는 소멸