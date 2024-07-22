#include <time.h>
#include <conio.h>
#include <stdio.h>
#include <Windows.h>
#include "MapTest.h"
#include "BlockTest.h"
#include "ConsoleCursorTest.h"

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


void drawBlockTest()
{
    COORD drawStartPoint = {40, 10};
    while (1)
    {
        int blockType;
        int rotation;
        blockType = _getch() - '0';
        rotation = _getch() - '0';

        if (blockType == 'A' - '0')
        {
            return;
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
                    printf("��");
                }
                else
                {
                    printf("  ");
                }
                
            }
        }
    }
}

extern char Map[MapSizeY][MapSizeX];

void DropBlockTest()
{
    COORD drawStartPoint = {40,10};
    while (1)
    {
        clock_t start_time = clock();

        while (clock() - start_time < 1000)
        {
            // DrawMap();            
            for (int dy = 0; dy < MapSizeY; ++dy)
                {
                    for (int dx = 0; dx < MapSizeX; ++dx)
                    {
                        int consoleX = drawStartPoint.X + dx;
                        int consoleY = drawStartPoint.Y + dy;

                        gotoXY(consoleX, consoleY);

                        switch (Map[dy][dx])
                        {
                            case 0:
                                printf("  ");
                                break;
                            case 1:
                                printf("��");
                                break;
                        }
                    }
                }
        }
        // drop algorithm
    }
}