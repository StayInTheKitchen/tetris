#include <stdio.h>
#include "bar.h"

int barVar;

void bar()
{
    printf("BAR\n");
    printf("%d\n", barVar);
}