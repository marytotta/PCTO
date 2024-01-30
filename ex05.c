#include <stdio.h>

int main()
{
    int tempcelsius;
    float tempkelvin;
    float tempfahrenheit;

    printf("aggiungi la temperatura in celsius\n");
    scanf(" %d", &tempcelsius);
    if (tempcelsius >= -273.15)
    {
        tempfahrenheit = 9/5 * tempcelsius + 32;
        tempkelvin = tempcelsius + 273.15;
        printf("la temperatura equivale a:\n");
        printf("%1f fahrenheit\n", tempfahrenheit);
        printf("%1f kelvin\n", tempkelvin);
    }
    else 
    {
        printf("sbagliato, la tempèeratura è minore dello zero assoluto\n");
    }

     return(0);


}