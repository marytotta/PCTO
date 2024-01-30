#include <stdio.h>

int main()
{
    int annoN;
    int n1;

    printf("quando sei nato?\n");
    scanf (" %d", &annoN);
    if (annoN == 1969)
    {
        printf("sei nato nello stesso anno in cui l'uomo è andato sulla luna\n");
    }
    else if (annoN > 1969)
    {
        n1 = annoN - 1969;
        printf("sei nato dopo di %d anni\n", n1);
        
    }
    else if (annoN < 1969)
    {
        n1 = 1969 - annoN;
        printf("sei nato prima di %d anni\n", n1);
    }
    return(0);

}