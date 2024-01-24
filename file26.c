#include <stdio.h>

int main ()
{
    int a;
    int x = 2;
    printf("Digita un numero:\n");
    scanf("%d", &a);
    while (x <= a)
    {
        if (a%x == 0 && a!=2)
        {
            printf("Il numero non è primo\n");
            break;

        }
        else
        {
            printf("Il numero è primo\n");
            break;
        }
    
            x++;    
    }
return (0);
}


