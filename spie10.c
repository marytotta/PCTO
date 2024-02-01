#include <stdio.h>


int calc (int f)
{
    int tot;
    tot = f;
    f = f - 1;
    while( f >= 1)
    {
        tot = tot * f;
        f = f - 1;
    }
    return(tot);
    
}

int main()
{
    int f;
    printf("scegli un numero\n");
    scanf(" %d", &f);
    printf("fattoriale: %d\n", calc(f));

    return(0);
}