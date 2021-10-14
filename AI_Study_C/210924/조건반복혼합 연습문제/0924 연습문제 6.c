#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("크기를 비교할 두 숫자를 입력하세요 : ");
    scanf_s("%d %d", &num1, &num2);

    if (num1 < num2)
        printf("%d이(가) %d보다 더 작습니다.\n", num1, num2);
    else if (num1 > num2)
        printf("%d이(가) %d보다 더 큽니다.\n", num1, num2);
    else
        printf("%d와 %d는 같습니다.\n", num1, num2);


    return 0;

}