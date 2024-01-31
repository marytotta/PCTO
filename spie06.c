#include <stdio.h>

int somma(int a, int b)
{
   int somma;
   somma = a + b;

   return (somma);
}

int main()
{
    int x = 5;
    int y = 7;
    int z;
    
    z = somma(x, y);
    printf("la somma è: %d\n", z);

    return(0);
    
}