#include <stdio.h>

int main(void) {
    
    //관계연산자 (비교연산자)
    //관계를 판별하는 연산자
    // >, <, >=, <=, ==, !=
    //num1 >= num2 : num1이 num2 이상인가?
    //num1 <= num2 : num1이 num2 이하인가?
    //num1 > num2 : num1이 num2 초과인가?
    //num1 < num2 : num1이 num2 미만인가?
    //num1 == num2 : num1과 num2가 같은가?
    //num1 != num2 : num1과 num2가 다른가?
    //관계연산자는 관계를 판별하고
    //그것이 참이면 1, 거짓이면 0

    int num1 = 9;
    int num2 = 2;
    int result = (num1 >= num2);
    //9가 2 이상인가?
    printf("%d\n", result);  //1 - true
    
    result = (num1 <= num2);
    //9가 2 이하인가?
    printf("%d\n", result);  //0 - false
    
    result = (num1 == num2);
    //9와 2가 같은가?
    printf("%d\n", result);  //0 - false
    
    result = (num1 != num2);
    //9와 2가 다른가?
    printf("%d\n", result);  //1 - true
    
    return 0;
    
}