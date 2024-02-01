#include <stdio.h>

int radice(int area)
{
    float temp, sqrt;
    sqrt = area / 2;
    temp = 2;

    while(sqrt != temp)
    {
        temp = sqrt;

        sqrt = (area/temp + temp) / 2;
    }

    return(sqrt);
}

int perimetro(int a, int b, int c)
{
    int perimetro = a + b +c;
    return(perimetro);

}
int area(int pm, int a, int b, int c)
{
    int area = pm / 2 * (pm / 2 - a) * (pm / 2 - b) * (pm / 2 - c);
    return(radice(area));
}

int main()
{
    int a;
    int b;
    int c;
    int pm;

    printf("scegli un lato:\n");
    scanf(" %d", &a);
    printf("scegli un lato:\n");
    scanf(" %d", &b);
    printf("scegli un lato:\n");
    scanf(" %d", &c);
    if(a + b > c && b + c > a && c + a > b)
    {
        pm = perimetro ( a, b, c);
        printf("il tuo perimetro è: %d\n", pm);
        printf("la tua area è: %d\n", area (pm, a, b, c));
    }
    else
    {
        printf("i numeri non possono essere delle lunghezze di un triangolo\n");
    }

    return(0);

}