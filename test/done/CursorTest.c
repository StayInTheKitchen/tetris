#include <Windows.h>
#include <conio.h>

void gotoXY(int x, int y)
{
    COORD Cur;
    Cur.X = x;
    Cur.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

int main(void)
{
    int inputX, inputY;

    while (1)
    {
        inputX = _getch();
        inputY = _getch();

        gotoXY(inputX - '0', inputY - '0');
    }

    return 0;
}