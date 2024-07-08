#include <Windows.h>
#include <conio.h>

void gotoXY(int x, int y)
{
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);
}

int main(void)
{
	int X=0,Y=0;
	int keyboardInput;
	while(1)
	{
		keyboardInput = _getch();
		
		if(keyboardInput == 224)
		{
			keyboardInput = _getch();
			
			switch(keyboardInput)
			{
				case 75:
					if(X != 0){
						X -= 1;
						break;
					}
					else{
						break;
					}
				case 72:
					if(Y != 0){
						Y -= 1;
						break;
					}
					else{
						break;
					}
				case 77:
					X += 1;
					break;
				case 80:
					Y += 1;
					break;
			}
			gotoXY(X, Y);
		}
		if(keyboardInput == 'A')
		{
			return 0;
		}
	}
	return 0;
}
