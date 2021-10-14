#include <stdio.h>

int main(void) {

    int dan = 7, i = 1;

    while (1)  //  while 무한루프
    {
        printf("%d X %d = %d\n", dan, i, (dan * i));
        i++;
    }

    return 0;

} 