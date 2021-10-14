#include <stdio.h>

int Factorial(int);

int main(void) {

    printf("%d\n", Factorial(5));

    return 0;

}

int Factorial(int N) {

    if (N == 0)
        return 1;
    else
        return N * Factorial(N - 1);

}