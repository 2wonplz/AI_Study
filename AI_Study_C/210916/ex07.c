#include <stdio.h>

int main(void) {
    
    //문자, 문자열 (배열)
    
    char grade =  'A';
    //char형 문자 변수 grade에 문자 'A'를 저장
    
    char name[15] = "Kim Chul Soo";
    //길이가 10인 문자 배열 name
    
    printf("Grade : %c\n", grade);  //A
    printf("Name : %s\n", name);  //Kim Chul S
    
    return 0;
    
}