#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int dif;

    printf("inserisci tre numeri\n");
    scanf(" %d", &n1);
    scanf(" %d", &n2);
    scanf(" %d", &n3);
    if (n2-n1 == n3-n2)
    {
        printf("sono in progressione aritmetica\n");
    }
    else
    {
        printf("non sono in pogressione aritmetica\n");
    }
    
    return(0);

}