#include <Windows.h>
#include <stdio.h>
#include <conio.h>

int main (void)
{
    int keyboardInput;
    while(1)
    {
        keyboardInput = _getch();

        if (keyboardInput == 224)
        {
            keyboardInput = _getch();

            switch (keyboardInput)
            {
                case 75:
                    printf("left arrow hit\n");
                    break;
                case 72:
                    printf("up arrow hit\n");
                    break;
                case 77:
                    printf("right arrow hit\n");
                    break;
                case 80:
                    printf("down arrow hit\n");
                    break;
            }
        }

        if (keyboardInput == 'A')
        {
            return 0;
        }
    }

    return 0;
}