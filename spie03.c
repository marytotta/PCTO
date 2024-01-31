#include <stdio.h>

void numeri()
{
    int nx;
    int ny;
    char op;

    printf("aggiungi un numero:\n");
    scanf(" %d", &nx);

    printf("metti un'operazione\n");
    scanf(" %c", &op);

    printf("aggiungi un altro numer:\n");
    scanf(" %d", &ny);
    
    if (op == '+')
    {
        op = nx + ny;
        printf("risultato: %d\n", nx + ny);
    }
    else if (op == '-')
    {
        op = nx - ny;
        printf("risultato: %d\n", nx - ny);
    }
     else if (op == '*')
    {
        op = nx * ny;
        printf("risultato: %d\n", nx * ny);
    }
     else if (op == '/')
    {
        op = nx / ny;
        printf("risultato: %d\n", nx / ny);
    }
    else 
    {
        printf("nessun risultato\n");
    }
}

int main()
{
    numeri();

    return(0);

}