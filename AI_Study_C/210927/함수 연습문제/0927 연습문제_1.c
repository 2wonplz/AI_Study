#include <stdio.h>

int max(int, int, int);
int min(int, int, int);

int main(void) {

    int num1, num2, num3, big, small;

    printf("세 개의 수를 입력하세요.\n\n");
    
    printf("첫 번째 수 입력 : ");
    scanf_s("%d", &num1);
    printf("두 번째 수 입력 : ");
    scanf_s("%d", &num2);
    printf("세 번째 수 입력 : ");
    scanf_s("%d", &num3);

    big = max(num1, num2, num3);
    small = min(num1, num2, num3);

    printf("\n");
    printf("입력한 수 중에 가장 큰 수 : %d\n", big);
    printf("입력한 수 중에 가장 작은 수 : %d\n", small);

    return 0;

}

int max(int num1, int num2, int num3) {

    if (num1 >= num2 && num1 >= num3)
        return num1;
    else if (num2 >= num1 && num2 >= num3)
        return num2;
    else
        return num3;

}

int min(int num1, int num2, int num3) {

    if (num1 <= num2 && num1 <= num3)
        return num1;
    else if (num2 <= num1 && num2 <= num3)
        return num2;
    else
        return num3;

}