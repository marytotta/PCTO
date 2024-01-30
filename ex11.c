#include <stdio.h>

int main()
{
    int N;
    int x = 2;
    int D = 0;

    printf("scegli un numero\n");
    scanf(" %d", &N);

    while(x < N)
    {
      if(N % x == 0)
      {
        D = D + 1; 
      }
      x = x + 1;
    }
    if (D == 0)
    {
        printf("numero primo\n");
    }
    else
    {
        printf("non è un numoero primo\n");
    }

    return(0);

}