#include <stdio.h>
#include <stdlib.h>  //  rand() �Լ� ���Ե� ���̺귯��
#include <time.h>  //  time() �Լ� ���Ե� ���̺귯��

int main(void) {

    // rand �Լ�
    int random;
    srand(time(NULL));  //  seed random

    for (int i = 0; i <= 10; i++) {
        random = rand();  //  rand �Լ� ȣ��
        printf("%d\n", random);
    }

    return 0;

}