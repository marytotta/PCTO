#include <stdio.h>

int main()
{
    int x1 = 0;
    int num = 0;
    int media = 0;

    while (x1 >= 0)
    {
        printf("scegli un numero:\n");
        scanf("%d", &x1);
        if (x1 > 0)
        {
            num = num + 1;
            media = media + x1;

        }
    }
    media = media / num;
    printf("media dei numeri: %d\n", media);
    
    return(0);

}