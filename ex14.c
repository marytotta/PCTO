#include <stdio.h>

int main()
{
    int pezzo = 0;
    int tot;
    int sconto;

    while(pezzo >= 0)
    {
        printf("quanti pezzi vuoi prendere?\n");
        scanf(" %d", &pezzo);
        if(pezzo > 0)
        {
            tot = pezzo * 5;
        if (pezzo >= 30 && pezzo < 50)
        {
            sconto = tot * 10 / 100;
            tot = tot - sconto;
            printf("prezzo totale: %d\n", tot);
        }
        else if (pezzo >= 50)
        {
            sconto = tot * 15 / 100;
            tot = tot - sconto;
            printf("prezzo totale: %d\n", tot);
        }
        else
        {
            printf("prezzo totale: %d\n", tot);
        }
        }
    }
    printf("errore\n");

    
    return(0);
    
    
}