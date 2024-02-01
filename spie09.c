#include <stdio.h>

void calcolo (int num1, int num2)
{
    if(num1> num2)
    {
        printf(" %d è piu grande %d\n", num2, num1);
    }
    else
    {
        printf(" %d è piu piccolo %d\n", num1, num2);
    }
}

int main()
{
    int num1;
    int num2;

    printf("scegli un numero:\n");
    scanf(" %d", &num1);
    printf("scegli un numero:\n");
    scanf(" %d", &num2);
    calcolo(num1, num2);

    return(0);
}