#include <stdio.h>

int main(void) {

    // continue - 반복문의 처음으로
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;
        printf("%d ", i);
    }

    // 홀수만 출력됨
    // 짝수는 continue를 만나 다시 위로 올라감

    return 0;

}