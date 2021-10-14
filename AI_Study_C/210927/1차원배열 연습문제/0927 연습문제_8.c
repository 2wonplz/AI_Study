#include <stdio.h>
// #include <string.h>

int main(void) {

    char arr[100];
    int i;

    printf("문자열을 입력하세요.\n");
    scanf_s("%s", arr, sizeof(arr));

    for (i = 0; arr[i] != 0; i++) {}

//  i = strlen(arr);
    // string length : 문자열 길이 구하는 함수

    printf("\n문자열의 길이는 %d\n", i);

    return 0;

}