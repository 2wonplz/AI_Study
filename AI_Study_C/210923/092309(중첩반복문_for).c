#include <stdio.h>

int main(void) {
    
    for (int dan = 2; dan <= 9; dan++) {  //  �ܺ� for��
        for (int i = 1; i <= 9; i++) {  //  ���� for��
            printf("%d X %d = %d\n", dan, i, (dan * i));
        }
        printf("\n");
    }

    return 0;

}