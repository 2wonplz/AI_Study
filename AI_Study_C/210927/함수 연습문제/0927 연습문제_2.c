#include <stdio.h>

double C_to_F(double);
double F_to_C(double);

int main(void) {

    int i;
    double num, temp;

    printf("1. ¼·¾¾¿Âµµ¿¡¼­ È­¾¾¿Âµµ·Î\n");
    printf("2. È­¾¾¿Âµµ¿¡¼­ ¼·¾¾¿Âµµ·Î\n");
    scanf_s("%d", &i);

    switch (i) {
    
    case 1 :
        printf("¼·¾¾ ¿Âµµ ÀÔ·Â : ");
        scanf_s("%lf", &num);
        temp = C_to_F(num);
        printf("º¯È¯µÈ È­¾¾´Â %.1lf", temp);
        break;
    case 2 :
        printf("È­¾¾ ¿Âµµ ÀÔ·Â : ");
        scanf_s("%lf", &num);
        temp = F_to_C(num);
        printf("º¯È¯µÈ ¼·¾¾´Â %.1lf", temp);
        break;
    default :
        printf("Àß¸øµÈ ÀÔ·Â°ªÀÔ´Ï´Ù.\n");
    
    }

    return 0;

}

double C_to_F(double num) { return num * 1.8 + 32; }

double F_to_C(double num) { return (num - 32) / 1.8; }