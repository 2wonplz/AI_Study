#include <stdio.h>

int main(void) {

    int KOR, ENG, MATH, AVG, i = 1;

    while (i <= 3) {
        printf("���� ���� ���� ���� �Է� : ");
        scanf_s("%d %d %d", &KOR, &ENG, &MATH);

        AVG = (KOR + ENG + MATH) / 3;

        printf("(%d��°) ���� ���� ���� ���� ��� %d\n\n", i, AVG);

        i++;
    }

    return 0;

}