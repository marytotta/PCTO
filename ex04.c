#include <stdio.h>

int main()
{
    
    int numero1;
    int numero2;
    int multiplo;

    printf("inserisci il primo numero\n");
    scanf(" %d", &numero1);
    printf("inserisci il secondo numero\n"),
    scanf(" %d", &numero2);
    multiplo = numero1 % numero2;

    if (multiplo == 0)
    {
        printf("è un multiplo\n");
    }
    else 
    {
        printf("non è un multiplo\n");
    }


    return(0);
}