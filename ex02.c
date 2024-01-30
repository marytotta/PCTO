#include <stdio.h>

int main()
{
    int eta;

    printf("dimmi la tua età\n");
    scanf(" %d", &eta);
    if (eta >= 18)
    {
        printf("\nsei maggiorenne\n");
    } 
    else 
    {
        printf("\nsei minorenne\n");
    }

    return(0);
    
    }