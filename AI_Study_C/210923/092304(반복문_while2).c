#include <stdio.h>

int main(void) {

    int dan = 7, i = 1;

    while (i <= 9) {
        printf("%d X %d = %d\n", dan, i, (dan * i));
        i++;
    }

    // debug - 디버그 (버그를 제거하다)
    // de : 박탈, 제거의 접두사
    // bug : 오류, 버그
    // 컴퓨터에서 최초의 오류를 일으킨게 벌레
    // debugging : 디버그를 하는 것, 버그를 제거하는 것

    return 0;

}