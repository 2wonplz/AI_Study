#include <stdio.h>

int main(void) {

    // if ~ else if ~ else
    int grade;
    printf("���� �Է� : ");
    scanf_s("%d", &grade);

    if (grade == 100)
        printf("A+\n");
    else if (100 > grade && grade >= 90)
        printf("A");
    else if (90 > grade && grade >= 80)
        printf("B");
    else if (80 > grade && grade >= 70)
        printf("C");
    else if (70 > grade && grade >= 60)
        printf("D");
    else
        printf("F");

    return 0;

}