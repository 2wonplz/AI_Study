#include <stdio.h>

int main(void) {
    
    printf("Hello World!\n");
    printf("C Programming!\n");
    
    //서식문자
    //값의 형태를 결정하는 문자
    //%d, %f, %lf, %c, %s, %u, %o, %x, %p, %g...
    //%d, %f, %lf, %c, %s
    
    //%d - decimal (10진수 정수)
    printf("My Age is : %d\n", 20);
    //%d는 출력될 형태를 결정
    //%d 형태로 (10진수 정수) 출력해라
    //출력될 정수값은 뒤에서 온다
    printf("My Age is : %d His Age is : %d\n", 20, 25);
    //첫번째 %d에는 20이 들어가고
    //두번째 %d에는 25가 들어간다
    
    return 0;
    
}