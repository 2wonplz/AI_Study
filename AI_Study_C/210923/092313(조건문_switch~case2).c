#include <stdio.h>

int main(void) {

    char ch = 'B';

    switch (ch) {
    case 'A' :
    case 'a' :
        printf("Apple\n");
    case 'B' :
    case 'b' :
        printf("Bear\n");
        break;
    }

    return 0;

}