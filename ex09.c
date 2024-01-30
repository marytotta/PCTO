#include <stdio.h>

int main()
{
    int lato1;
    int lato2;
    int lato3;

    printf("scegli tre numeri\n");
    scanf(" %d", &lato1);
    scanf(" %d", &lato2);
    scanf(" %d", &lato3);
    if (lato1 == 0 || lato2 ==0 || lato3 == 0)
    {
        printf("il triangolo non è valito\n");
    }
    else if (lato1 == lato2 && lato2 == lato3)
    {
        printf("è un trangolo equilatero\n");
    }
    else if (lato1 == lato2 || lato2 == lato3 || lato3 == lato1)
    {
        printf("è un triangolo isoscele\n");
    }
    else if (lato1 != lato2 && lato2 != lato3)
    {
        printf("è un triangolo scaleno\n");
    }


    return(0);

}