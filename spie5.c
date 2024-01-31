#include <stdio.h>

void carattere()
{
    char c;
    printf("inserisci un carattere\n"),
    scanf(" %c", &c);
    if ((c >= 97 && c <= 122) || c >= 65 && c <= 90 )
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("è una vocale\n");
    }
    else
    {
        printf("è una consonante\n");
    }
}

int main()
{
    carattere();

    return(0);

}
