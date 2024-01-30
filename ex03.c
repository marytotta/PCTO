#include <stdio.h>

int main()
{
    int patente;
    int patentesi;

    printf("a quanti anni si può prendere la patente nel tuo stato?\n");
    scanf(" %d", &patentesi);
    printf("quanti anni hai?\n");
    scanf(" %d", &patente);
    if (patente >= patentesi)
    {
        printf("\npuoi prendere la patente\n");
    }
    else 
    {
        printf("\nnon puoi prendere la patente\n");
    }

    return(0);

}