#include <stdio.h>

int main ()
{
float a;
float b;
float c;
printf("dimmi un numero\n");
scanf("%f", &a);
printf("dimmi un numero\n");
scanf("%f", &b);
printf("dimmi un numero\n");
scanf("%f", &c);
if (a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
    {
        printf("i numeri possono essere lunghezze di un triangolo\n"); 
    }
else 
    {
        printf("i numeri non possono essere lunghezze di un triangolo\n");
    }
}