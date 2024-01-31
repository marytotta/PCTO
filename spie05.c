#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("inserisci una coordinata alla\n");
    scanf(" %d", &x);
    printf("inserisci un'altra coordinata\n");
    scanf(" %d", &y);

    if (x > 0 && y > 0)
    {
        printf("sei nel primo quadrante\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("sei nel quarto quadrante\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("sei nel secondo quadrante\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("ti trovi allo zeo\n");
    }
    else
    {
        printf("sei nel terzo quadrante\n");
    }
    
    return(0);

}