#include <stdio.h>

int main(void)
{
    unsigned long long input; 
    char mask = 1;
    int cnt = 0;

    scanf("%ull", &input);

    for (int i = 0; i < 40; ++i)
    {
        cnt += (input & mask); 
        input >>= 1;
    }

    if (cnt != 1)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }

    return 0;
}