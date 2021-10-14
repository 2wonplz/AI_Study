#include <stdio.h>
#include <stdlib.h>  //  rand() 함수 포함된 라이브러리
#include <time.h>  //  time() 함수 포함된 라이브러리

int main(void) {  //  주사위를 10번 굴렸을때 각 눈금이 나온 횟수 측정

    int arr[6] = { 0,0,0,0,0,0 };
    // 길이가 6인 int형 1차원 배열 arr
    // int값 6개 저장가능한 공간

    int random;
    srand(time(NULL));

    for (int i = 1; i <= 10; i++) {
        random = rand() % 6 + 1;
        printf("%d\n", random);
        arr[random - 1]++;
    }

    printf("\n");
    for (int i = 0; i <= 5; i++)
        printf("%d ", arr[i]);

    return 0;

}