#include <stdio.h>

int main()
{
    int anno;
    printf("inserisci l'anno\n");
    scanf(" %d", &anno);
    if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)
    {
        printf("è bisestile\n");
    }
    else
    {
        printf("non è bisestile\n");
    }
    
    return(0);
}