#include <stdio.h>
int main()
{
    int simone;
    int francesco;
    int flavio;
    int Andrea;
    int Somma;
    printf("Ciao Simone quanti anni hai?\n");
    scanf("%d", &simone );
    printf("Simone ha %d anni\n", simone);
    printf("Ciao Francesco quanti anni hai?\n");
    scanf("%d", &francesco);
    printf("Francesco ha %d anni\n", francesco);
    printf("Ciao Andrea quanti anni hai?\n");
    scanf("%d", &Andrea);
    printf("Andrea ha %d anni\n", Andrea);
    printf("Ciao Flavio quanti anni hai?\n");
    scanf("%d", &flavio);
    printf("Flavio ha %d anni\n", flavio);
    Somma = simone+francesco+flavio+Andrea;
    printf("La somma delle età dei ragazzi è %d\n", Somma);


}