#include <stdio.h>
#include <string.h>

int main(void) {

    char arr1[100], arr2[100];
    char ch;
    int i, j, check;

    printf("문자열을 입력하세요.\n");
    scanf_s("%s", arr1, sizeof(arr1));

    for (i = 0; i < 100; i++)
        arr2[i] = arr1[i];

    for (i = 0; arr1[i] != 0; i++) {}
    printf("문자열의 길이는 %d\n", i);

    for (j = 0; j < (i / 2); j++) {
        ch = arr1[j];
        arr1[j] = arr1[(i - j) - 1];
        arr1[(i - j) - 1] = ch;
    }

    check = strcmp(arr1, arr2);

    if (check == 0)
        printf("회문입니다.\n");
    else
        printf("회문이 아닙니다.\n");

    return 0;

}