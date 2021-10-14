#include <stdio.h>

int main(void) {
    
    // 1. 앞에 숫자 안되고
    // 2. 특수문자 안되는데
    // _ , $ 는 된다
    int $num1 = 0;
    // 3. 언어에서 이미 사용하는 키워드는 변수명으로 못쓴다
    
 
    // 변수 표기법
 
    // 카멜 표기법 (Camal Case)
    int numOfApple = 10;
    // 첫글자 앞부분은 소문자고, 그 다음부터는 글자 시작을 대문자로
    // 낙타의 등이 솟은 모양
    
    // 스네이크 표기법 (Snake Case)
    int num_of_kiwi = 20;
    // 단어 사이에 언더바
    // 뱀이 기어가는 모양

    // 케밥 케이스 (Kebab Case)
    // int num - of - pear = 0;
    // 단어 사이에 하이픈
    // C언어에서는 사용불가 (HTML에서 자주 쓰이는 표기법)

    return 0;

}