#include <stdio.h>

void verifica(int numero)
{
    if(numero % 2 == 0)
    {
        printf("è pari\n");
    }
    else 
    {
        printf(" è dispari\n");
    }
}

int main()
{
    int numero;

    printf("scegli un numero\n");
    scanf(" %d", &numero);
    verifica(numero);

    return(0);
}