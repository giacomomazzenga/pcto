#include <stdio.h> 
#include <string.h>
float somma(float a,  float b)
{
    float somma1 = a+b;
    printf("%f\n", somma1);
    return (somma1);
}
float differenza(float a,  float b)
{
    float differenza1 = a-b;
    printf("%f\n", differenza1);
    return (differenza1);
}
float moltiplicazione(float a,  float b)
{
    float moltiplicazione1 = a*b;
    printf("%f\n", moltiplicazione1);
    return (moltiplicazione1);
}
float divisione(float a,  float b)
{
    float divisione1 = a/b;
    printf("%f\n", divisione1);
    return (divisione1);
}

int main ()
    {
    float x;
    float y;
    float valore;
    char choice [20];
    printf("Seleziona un numero\n");
    scanf("%f", &x );
    printf("Seleziona un secondo numero\n");
    scanf("%f", &y );
    printf("Selezione l'operazione: addizione, sottrazione, moltiplicazione, divisione\nOppure digita stop per interrompere il programma\n ");
    scanf("%s", choice );
    while (strcmp(choice, "addizione") ==0 ||strcmp (choice, "sottrazione")==0  ||strcmp (choice, "moltiplicazione")==0  ||strcmp (choice, "divisione")==0)
        {
            if (strcmp( choice, "stop") == 0)
            {
                break;
            } 
            else if (strcmp( choice, "addizione") == 0) 
            {
                somma(x, y);
            }
            else if (strcmp( choice, "sottrazione") == 0)
            {
                differenza(x, y);
            }
            else if (strcmp( choice, "moltiplicazione") == 0)
            {
                moltiplicazione(x, y);
            }
            else if (strcmp( choice, "divisione") == 0)
            {
                divisione(x, y);
            }
            printf("seleziona un numero\n");
            scanf("%f", &x );
            printf("selezione un numero\n");
            scanf("%f", &y );
            printf("selezione l'operazione:addizione, sottrazione, moltiplicazione, divisione\nOppure digita stop per interrompere il programma\n");
            scanf("%s", choice );
            
            
           }   
    return (0);
    }