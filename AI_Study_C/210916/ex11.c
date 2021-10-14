#include <stdio.h>

int main(void) {
    
    double num1 = 3.14;
    double num2 = 3.20;
    double half = 5;
    double pie = 3.14;
    
    double result = (num1 + num2);
    printf("3.14 + 3.20 = %.2lf\n", result);
    
    result = (num1 - num2);
    printf("3.14 - 3.20 = %.2lf\n", result);
    
    result = (num1 * num2);
    printf("3.14 * 3.20 = %.2lf\n", result);
    
    result = (num1 / num2);
    printf("3.14 / 3.20 = %.2lf\n\n", result);
    
    
    double per = (2 * pie * half);
    double area = (pie * half * half);
    printf("Periphery : %.1lf\n", per);
    printf("Area : %.1lf\n", area);
    
    return 0;
    
}