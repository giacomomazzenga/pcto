#include <stdio.h>
double radiceQuadrata(double numero) 
{
double approssimazione = numero / 2.0;
double differenza = numero - approssimazione * approssimazione;
while (differenza > 0.00001) 
{
    approssimazione = (approssimazione + numero / approssimazione) / 2.0;
    differenza = numero - approssimazione * approssimazione;
}
return approssimazione;
}
int main ()
{
    float lato1;
    float lato2;
    float lato3;
    float p;
    float pp;
    float a;

    printf("inserisci una dimensione del triangolo");
    scanf("%f", &lato1 );
    printf("inserisci una dimensione del triangolo");
    scanf("%f", &lato2 );
    printf("inserisci una dimensione del triangolo");
    scanf("%f", &lato3 );
    p = (lato1+lato2+lato3)/2;
    pp = p*2;
    a = radiceQuadrata(p*(p-lato1)*(p-lato2)*(p-lato3)); 
    if (lato1+lato2>lato3 && lato1+lato3>lato2 && lato2+lato3>lato1 && lato1>0 && lato2>0 && lato3>0)
    {
       printf("il perimetro è %f", pp);
       printf("l'area p %f", a);

    }
    else 
    {
        printf("i numeri non possono essere lunghezze di un triangolo\n");
    }
   
}
