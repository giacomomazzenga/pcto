//Il programma calcola l'importo annuo lordo e indica  l'importo annuale tassato//
#include <stdio.h>
#include <string.h>

int main ()
{
    float importolordo;
    float importoannuo;
    char stringa[] = "si";
    float importoannuo1;
    float importoannuo2;
    float importoannuo3;
    float importoannuo4;

    while (strcmp (stringa, "si")==0 )
    {
        printf("Inserisci il tuo stipendio mensile lordo\n");
        scanf(" %f", &importolordo );  
        importoannuo = importolordo*13;
        if (importoannuo<=0)
        {
            printf("errore\n");
            break;
        }
        else
        {
            printf("il tuo importo lordo annuale è %f, desideri conoscere il tuo importo annuale tassato?(si/no)\n", importoannuo);
            scanf (" %s", stringa);
            importoannuo1 = importoannuo-(importoannuo*23/100);
            importoannuo2 = importoannuo-(importoannuo*25/100);
            importoannuo3 = importoannuo-(importoannuo*35/100);
            importoannuo4 = importoannuo-(importoannuo*43/100);
        }
        if (importoannuo<15000)
        {
            printf("il tuo importo annuo è %f\n", importoannuo1);
        }
        else if (importoannuo>15001 && importoannuo<28000)
        {
            printf("il tuo importo annuo è %f\n", importoannuo2 );
        }
        else if (importoannuo>28001 && importoannuo<50000 )
        {
            printf("il tuo importo annuo è %f\n", importoannuo3 );
        }
        else if (importoannuo>50000)
        {
            printf("il tuo importo annuo tassato è %f\n", importoannuo4 );
        }
        printf("Grazie per aver scelto il nostro servizio!\n\n");
    }
    
}    
        
