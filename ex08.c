#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("inserisci tre numeri\n");
    scanf(" %d", &n1);
    scanf(" %d", &n2);
    scanf(" %d", &n3);
    if (n1+n3 > n2 && n3+n2 > n1 && n2+n1 > n3)
    {
        printf("può essere un triangolo\n");
    }    
    else
    {
        printf("non può essere un triangolo\n");
    }
    return(0);

}