#include <stdio.h>

int main(void) {

    int star, i = 1;

    while (i <= 5) {
        star = 5;
        while (star > i) {
            printf(" ");
            star--;
        }
        printf("*\n");
        i++;
    }

    return 0;

}