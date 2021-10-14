#include <stdio.h>

int main(void) {
    
    //%f, %lf
    //실수를 표현하는 서식문자
    //f - float, lf - long float
    //float변수 %f, double변수에는 %lf
    //float - 4byte, double - 8byte
    printf("My Height is : %fcm\n", 176.54f);
    printf("My Height is : %.1fcm\n", 176.54f); //176.5
    //소수점 둘째자리에서 반올림해서 첫째자리 표현
    printf("My Weight is : %lfkg\n", 67.89);
    printf("My Weight is : %.1lfkg\n", 67.89); //67.9
    
    return 0;
    
}