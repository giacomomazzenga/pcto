#include <stdio.h>
int main()
{
  float prelievo;
  float saldo = 1000;
  float x;
  printf("inserisci il valore da prelevare\n");
  scanf("%f", &prelievo);
  if (prelievo>saldo) 
  {
    printf ("sei povero!");
  }
  else if (prelievo<0) 
  {
    printf ("Sei stupido! Non puoi prelevare meno di 0!");
  }
  else
  {
    printf("Soldi prelevati!, il tuo saldo è ");
    x = saldo- prelievo;
    printf ("%f", x);
  }
}