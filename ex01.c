#include <stdio.h>

int main()
{
    int numero;
    int numero2;
    int numero3;
    int numero4;
    int numero5;

    printf("Scegli Un Numero:");
    scanf("%d", &numero);
    printf("Scegli Un Numero:");
    scanf("%d", &numero2);
    printf("Scegli Un Numero:");
    scanf("%d", &numero3);
    printf("Scegli Un Numero:");
    scanf("%d", &numero4);
    printf("Scegli Un Numero:");
    scanf("%d", &numero5);

    
    int risultato = numero + numero2 + numero3 + numero4 + numero5;
    printf("Il Tuo Risultato è: %d\n", risultato);
    
    
    return(0);
}