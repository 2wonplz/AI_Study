#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#include <conio.h>

#define Q 1046.502
#define W 1174.659
#define E 1318.510
#define R 1396.913
#define T 1567.982
#define Y 1760.000
#define U 1975.533
#define I 2093.005
#define O 2349.318
#define P 2637.020

void RemoveCursor(void)
{
    CONSOLE_CURSOR_INFO curinfo;
    GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
    curinfo.bVisible = 0;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curinfo);
}

int main()
{
    char input = 0;
    SetConsoleTitle(_T("�ǾƳ�"));
    RemoveCursor();
    printf("Q=��, W=��, E=��, R=��, T=��, Y=��, U=��, I=������, O=������, P=������\n");
    printf("���͸� ������ ���α׷� ����.(�빮���ʼ�)");
    while (1)
    {
        if (kbhit())
        {
            input = getch();
            if (input == 13)
            {
                return 0;
            }
            if (input == 'Q')
            {
                Beep(Q, 100);
            }
            else if (input == 'W')
            {
                Beep(W, 100);
            }
            else if (input == 'E')
            {
                Beep(E, 100);
            }
            else if (input == 'R')
            {
                Beep(R, 100);
            }
            else if (input == 'T')
            {
                Beep(T, 100);
            }
            else if (input == 'Y')
            {
                Beep(Y, 100);
            }
            else if (input == 'U')
            {
                Beep(U, 100);
            }
            else if (input == 'I')
            {
                Beep(I, 100);
            }
            else if (input == 'O')
            {
                Beep(O, 100);
            }
            else if (input == 'P')
            {
                Beep(P, 100);
            }
        }
    }
    return 0;
}
