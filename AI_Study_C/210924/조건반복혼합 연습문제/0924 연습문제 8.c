#include <stdio.h>

int main(void) {

    char sx;
    double hei, Mh = 175.2, Fh = 162.5;

    printf("������ Ű�� �Է��ϼ��� : ");
    scanf_s("%c %lf", &sx, sizeof(sx), &hei);

    switch (sx) {
    case 'M' :
    case 'm' :
        if (hei < Mh)
            printf("����� Ű�� ���� ��� Ű���� %.2lfcm��ŭ �۽��ϴ�.\n", (Mh - hei));
        else if (hei > Mh)
            printf("����� Ű�� ���� ��� Ű���� %.2lfcm��ŭ Ů�ϴ�.\n", (hei - Mh));
        else
            printf("����� Ű�� ���� ��� Ű�� �����ϴ�.\n");
        break;
    case 'F' :
    case 'f' :
        if (hei < Fh)
            printf("����� Ű�� ���� ��� Ű���� %.2lfcm��ŭ �۽��ϴ�.\n", (Fh - hei));
        else if (hei > Fh)
            printf("����� Ű�� ���� ��� Ű���� %.2lfcm��ŭ Ů�ϴ�.\n", (hei - Fh));
        else
            printf("����� Ű�� ���� ��� Ű�� �����ϴ�.\n");
        break;
    default :
        printf("�߸��� ���� �Է��Դϴ�.");

    }

    return 0;

}