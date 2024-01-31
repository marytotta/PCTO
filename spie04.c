#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int j;
    int p = 0;

    printf("scegli un numero da 0 a 10\n");
    scanf(" %d", &n);
    while (n >= 0)
    {
        j = ((double)rand() / RAND_MAX) * (10 - 0) + 0;
        if (n == j)
        {
            p = p + 1;
            printf("hai indovinato\n");
            printf(" %d\n", p);
        }
        else
        {
            printf("non hai indovinato, era: %d\n", j);
        }
        printf("scegli un numero da 0 a 10\n");
        scanf(" %d", &n);
        printf("ecco i tuoi punti: %d\n", p);
    }

    return(0);
    
}


