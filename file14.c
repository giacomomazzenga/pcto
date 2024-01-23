#include <stdio.h>
int main()
{
int a;
int b;
int c;
printf("inserisci un numero");
scanf("%d", &a);
printf("inserisci un numero");
scanf("%d", &b);
printf("inserisci un numero");
scanf("%d", &c);
if (a-b == b-c)
    {
        printf("i numeri sono in progressione aritmetica");
    }
else
    {
    printf("i numeri non sono in progressione aritmetica");
    }
}
