#include <stdio.h>

int add(int num1, int num2) { return num1 + num2; }  //  인자전달 O, 반환값 O

void ShowAddResult(int num) { printf("덧셈결과 출력 : %d\n", num); }  //  인자전달 O, 반환값 X

int ReadNum(void) {  //  인자전달 X, 반환값 O

    int num;
    scanf_s("%d", &num);
    return num;

}

void HowToUseThisProg(void) {  //  인자전달 X, 반환값 X

    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
    printf("자! 그럼 두 개의 정수를 입력하세요.\n");

}

int main(void) {

    int result, num1, num2;

    HowToUseThisProg();

    num1 = ReadNum();
    num2 = ReadNum();
    result = add(num1, num2);

    ShowAddResult(result);

    return 0;

}