#include <stdio.h>

int main()
{
    
    int x = 6;
    int result = 1;

    printf("scegli un numero:\n");
    scanf(" %d", &x);
    while(x > 0)
    {
        result = result * x;
        x = x - 1;

    }
    printf(" %d\n", result);


    return(0);

}