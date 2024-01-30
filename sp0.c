#include <stdio.h>

int main()
{
    int x = 1;
    int y;
    while(x <= 100)
    {
         y = x + y;
         x = x + 1;

    }
    printf(" %d\n", y);

    return(0);
}