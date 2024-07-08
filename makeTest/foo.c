#include <stdio.h>
#include "foo.h"

int fooVar;

void foo()
{
    printf("FOO!\n");
    printf("%d\n", fooVar);
}