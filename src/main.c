#include <Windows.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int keyboardInput;
    while(1)
    {
        keyboardInput = _getch();
        printf("%d\n", keyboardInput);
    }
}