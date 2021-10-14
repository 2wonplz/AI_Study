#include <stdio.h>

int main(void) {
    
    //나머지 연산자
    // %
    int num1 = 9;
    int num2 = 2;
    int result = num1 % num2;
    //num1을 num2로 나눈 나머지를 result에 저장한다
    // = : 대입 연산자
    //연산자 방향 : 오른쪽 -> 왼쪽
    //오른쪽의 값을 왼쪽의 공간에 저장한다
    //num1 = num2 : num2의 값을 num1의 공간에 넣겠다
    //9 / 2 = 4 ... 1
    
    printf("%d를 %d로 나눈 나머지 : %d\n", num1, num2, result);
    //9를 2로 나눈 나머지 : 1
    
    return 0;
    
}