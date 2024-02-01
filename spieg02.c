#include <stdio.h>

int main()
{

    char stringa[100];
    int j = 0;
    
    printf("dimmi una parola:\n");
    scanf("%[^\n]%*c", stringa);
    while(stringa[j] != '\0')
    {
        if (stringa[j] >= 97 && stringa[j] <= 122)
        {
            stringa[j] = stringa[j] - 32;
    
        }

         j = j + 1;

    }
    printf("%s\n", stringa);

    return(0);

}