#include <stdio.h>

int main(void) {

    char arr[26];
    int i = 0;

    for (char ch = 'A'; ch <= 'Z'; ch++)
        arr[i++] = ch;

    for (i = 0; i < 26; i++)
        printf("arr[%d] = %c\n", i, arr[i]);

    return 0;

}