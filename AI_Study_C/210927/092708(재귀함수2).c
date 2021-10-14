#include <stdio.h>

void Recursive(int);

int main(void) {

    int num = 3;

    Recursive(num);

    return 0;

}

void Recursive(int num) {

    if (num == 0)  //  종료조건
        return;

    printf("Recursive Call! : %d\n", num);
    Recursive(num - 1);

}