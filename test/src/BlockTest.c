#include <Windows.h>
#include <conio.h>
#include <stdio.h>

void gotoXY(int x, int y)
{
    COORD Cur;
    Cur.X = x;
    Cur.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

// 5 types of block
// 4 types of rotation for each block
// 4 x 4 for block info
char blockInfo[5][4][4][4] =
{
    {
        // block 0 : square type 
        {
            {2,2,0,0},
            {2,2,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {2,2,0,0},
            {2,2,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {2,2,0,0},
            {2,2,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {2,2,0,0},
            {2,2,0,0},
            {0,0,0,0},
            {0,0,0,0}
        }
    },
    {
        // block 1 : T type 
        {
            {0,2,0,0},
            {2,2,2,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {2,0,0,0},
            {2,2,0,0},
            {2,0,0,0},
            {0,0,0,0}
        },
        {
            {2,2,2,0},
            {0,2,0,0},
            {0,0,0,0},
            {0,0,0,0},
        },
        {
            {0,2,0,0},
            {2,2,0,0},
            {0,2,0,0},
            {0,0,0,0}
        }
    },
    {
        // block 2 : L type
        {
            {2,0,0,0},
            {2,2,2,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {2,2,0,0},
            {2,0,0,0},
            {2,0,0,0},
            {0,0,0,0}
        },
        {
            {2,2,2,0},
            {0,0,2,0},
            {0,0,0,0},
            {0,0,0,0},
        },
        {
            {0,2,0,0},
            {0,2,0,0},
            {2,2,0,0},
            {0,0,0,0}
        }
    },
    {
        // block 3 : l type
        {
            {2,0,0,0},
            {2,0,0,0},
            {2,0,0,0},
            {2,0,0,0}           
        },
        {
            {2,2,2,2},
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {0,0,0,2},
            {0,0,0,2},
            {0,0,0,2},
            {0,0,0,2}
        },
        {
            {0,0,0,0},
            {0,0,0,0},
            {0,0,0,0},
            {2,2,2,2}
        }
    },
    {
        // block 4 : z type
        {
            {2,2,0,0},
            {0,2,2,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {0,2,0,0},
            {2,2,0,0},
            {2,0,0,0},
            {0,0,0,0}
        },
        {
            {2,2,0,0},
            {0,2,2,0},
            {0,0,0,0},
            {0,0,0,0}
        },
        {
            {0,2,0,0},
            {2,2,0,0},
            {2,0,0,0},
            {0,0,0,0}
        }
    }
};

COORD drawStartPoint = {40, 10};

int main(void)
{
    system("cls");
    gotoXY(drawStartPoint.X, drawStartPoint.Y);

    while (1)
    {
        int blockType;
        int rotation;
        blockType = _getch() - '0';
        rotation = _getch() - '0';

        if (blockType == 'A' - '0')
        {
            return 0;
        }

        for (int dy = 0; dy < 4; ++dy)
        {
            for (int dx = 0; dx < 4; ++dx)
            {
                int curX = drawStartPoint.X + dx;
                int curY = drawStartPoint.Y + dy;

                gotoXY(curX, curY);
                if (blockInfo[blockType][rotation][dy][dx] == 2)
                {
                    printf("бс");
                }
                else
                {
                    printf("  ");
                }
                
            }
        }
    }

    
    return 0;
}