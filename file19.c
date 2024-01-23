#include <stdio.h>

int main ()
{
    int ordine = 5;
    int numero;
    int risultato;
    float sconto;
    float sconto2;
    printf("Inserisci il numero di prodotti da acquistare\n");
    scanf("%d", &numero);
    while (numero>0)
    {
    risultato= ordine*numero;
    sconto = risultato-(risultato*10/100);
    sconto2 = risultato- (risultato*15/100);
    if (numero<30 )
        {
            printf("il costo totale è %d\n", risultato);
        }
    else if (numero>30 && numero<50)
        {
            printf("il costo totale è %f\n", sconto);
        }
    else if (numero>50)
        {
            printf("il costo totale è %f\n", sconto2);
        }
     printf("Inserisci il numero di prodotti da acquistare\n");
     scanf("%d", &numero);
    }
}
