#include <stdio.h>
int main()
{
    int eta;
    int differenza;
    int differenza1; 
    printf("inserisci il tuo anno di nascita a 4 cifre (es 1978)");
    scanf("%d", &eta);

differenza = eta-1969;
differenza1= 1969-eta;
if (eta<0)
{
    printf("errore");
}
else if (eta == 1969)
{
    printf("sei nato nell'anno in cui per la prima volta l'uomo è stato sulla luna");
}
else if (eta> 1969)
{
    printf("sei nato %d anni dopo la prima volta che l'uomo è stato sulla luna", differenza );
}
else if (eta< 1969 )
{
    printf("sei nato %d anni prima la prima volta che l'uomo è stato sulla luna", differenza1);
}
}