#include <stdio.h>

// 재귀함수 - 다시 돌아오는 함수
void Recursive(int);

int main(void) {

    int num = 1;

    Recursive(num);

    return 0;

}

void Recursive(int num) {  //  무한재귀함수

    // 자기 자신의 정의안에, 자기 자신을 호출
    printf("Recursive Call! : %d\n", num);
    Recursive(num + 1);

}