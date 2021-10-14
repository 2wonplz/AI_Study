#include <stdio.h>

int main(void) {

    // switch ~ case
    int num = 2;

    switch (num) {
    case 1 :
        printf("One!\n");
        break;
    case 2 :
        printf("Two!\n");
        break;
    default :
        printf("???\n");
        break;
    }

    return 0;

}