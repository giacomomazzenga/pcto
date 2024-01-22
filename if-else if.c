#include <stdio.h>
int main()
{
float prelievo;
float saldo = 1000;
printf("inserisci il valore da prelevare\n");
  scanf("%f", &prelievo);
  if (prelievo>saldo) {printf ("sei povero!");}
    else if (prelievo<0) {printf ("non puoi prelevevare meno di 0!");}
    else if (prelievo>0) {printf("Soldi prelevati!, il tuo saldo è ");
    float x = saldo- prelievo;
    printf ("%f", x);}




}