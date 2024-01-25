#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
    char risposta1[50];
    char risposta2[50];
    char risposta3[50];
    char risposta4[50];
    char risposta5[50];
    char risposta6 [50];
    inizio1:
    printf("Salve e benvenuti sulla nuova app STAYHEALTHY per il benessere!\n \nSelezionare una delle seguenti opzioni");
    inizio:
    printf("\n\n1. Ricerca di luoghi di svago\n2. Ricerca di parchi\n3. Ricerca di centri sportivi e Palestre\n4. Controllo del sonno\n5. Monitoraggio delle attività giornaliere\n6. Schede di allenamento\n7. Alimentazione\n  ");
    scanf(" %s", risposta1);
    if (strcmp(risposta1, "1.") == 0 || strcmp(risposta1, "Ricerca di luoghi di Svago") == 0 || strcmp(risposta1, "luoghi di Svago") == 0 || strcmp(risposta1, "1") == 0)
    {
        printf("Benvenuto nella sezione -Ricerca di luoghi di svago-\nSeleziona una delle seguenti opzioni\n\n");     
        printf("\n1. Trova il luogo di svago più vicino a te\n2. Trova le biblioteche più vicine a te\n3. Le attività più divertenti da fare a Roma\n\nOppure premi + per tornare alla pagina iniziale\n");
        scanf(" %s", risposta2);
        if (strcmp(risposta2, "1.") == 0 || strcmp(risposta2, "più vicino a me") == 0 || strcmp(risposta2, "luogo di svago") == 0 || strcmp(risposta2, "Trova il luogo di svago più vicino a te") == 0 || strcmp(risposta2, "1") == 0)
        {
            printf("Per vedere il luogo più vicino a te è necessario consentire l\'accesso alla posizione del dispostivo\n\n");
            sleep(1);
            printf("Seleziona una delle seguenti opzioni relative all\'accesso alla posizione (1/2/3)\n1. Consenti solo questa volta\n2. Consenti sempre\n3. Non consentire\n");
            scanf(" %s", risposta3);
            if (strcmp(risposta3, "1") == 0)
            {
                printf("Posizione ottenuta, la tua posizione attuale è Viale Romania 32\n\nIl luogo di svago più vicino a te è -La stecca Billiard room- che si trova a 2km dalla tua posizione attuale\n\nCosa offre?\nLa stecca Billiard room è una sala da biliardo che offre anche la possibilità di giocare a Bowling. Ottimo per passare una sera con amici\nNon sai con chi andare?\nIl posto è molto accogliente e le persone sono amichevoli, non avrai problemi a fare amicizia!\n");
                printf("Vuoi tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
             else if (strcmp(risposta3, "2") == 0)
            {
                printf("Posizione ottenuta, la tua posizione attuale è Viale Romania 32\n\nIl luogo di svago più vicino a te è -La stecca Billiard room- che si trova a 2km da qui\nCosa offre?\nLa stecca Billiard room è una sala da biliardo che offre anche la possibilità di giocare a Bowling. Ottimo per passare una sera con amici\nNon sai con chi andare?\nIl posto è molto accogliente e le persone sono amichevoli, non avrai problemi a fare amicizia!\n");
                printf("Vuoi tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (strcmp(risposta3, "3") == 0)
            {
                printf("Senza la posizione non è possibile fornire la risposta, desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
        }
        else if(strcmp(risposta2, "+") == 0)
        {
            goto inizio1;
        }
        else if (strcmp(risposta2, "2.") == 0 || strcmp(risposta2, "biblioteche") == 0 || strcmp(risposta2, "più vicino a me") == 0 || strcmp(risposta2, "Trova la biblioteca più vicina a te") == 0 || strcmp(risposta2, "2") == 0)
        {
            printf("Per vedere le biblioteche più vicine a te è necessario consentire l\'accesso alla posizione del dispostivo\n\n");
            sleep(1);
            printf("Seleziona una delle seguenti opzioni relative all\'accesso alla posizione (1/2/3)\n1. Consenti solo questa volta\n2. Consenti sempre\n3. Non consentire\n");
            scanf(" %s", risposta3);
            if (strcmp(risposta3, "1") == 0)
            {
                printf("Posizione ottenuta, la tua posizione attuale è Viale Romania 32\n\nLe biblioteche più vicine a te sono\n1. Mediateca ex Fabbrica Peroni (2,4km)\n2. “La Sapienza”,biblioteca di Filosofia (1km)\n3. Luiss Guido Carli, biblioteca (1,4km)\n4. Biblioteca Europa (2.3km)\n5. Biblioteca Villa Leopardi (2,8km)\n6.Biblioteca Arturo Chiari (2,9km)\n7. Biblioteca Tullio De Mauro (2,5km)\n8. Biblioteca Universitaria Alessandrina (2,3km)\n9. Biblioteca Ennio Flaiano (5,9km)\n10. Sala lettura 24H (1km)\n\n");
                printf("Vuoi tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (strcmp(risposta3, "2") == 0)
            {
                printf("Posizione ottenuta, la tua posizione attuale è Viale Romania 32\n\nLe biblioteche più vicine a te sono\n1. Mediateca ex Fabbrica Peroni (2,4km)\n2. “La Sapienza”,biblioteca di Filosofia (1km)\n3. Luiss Guido Carli, biblioteca (1,4km)\n4. Biblioteca Europa (2.3km)\n5. Biblioteca Villa Leopardi (2,8km)\n6. Biblioteca Arturo Chiari (2,9km)\n7. Biblioteca Tullio De Mauro (2,5km)\n8. Biblioteca Universitaria Alessandrina (2,3km)\n9. Biblioteca Ennio Flaiano (5,9km)\n10. Sala lettura 24H (1km)\n\n");
                printf("Vuoi tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (strcmp(risposta3, "3") == 0)
            {
                printf("Senza la posizione non è possibile fornire la risposta, desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
        }
        else if (strcmp(risposta2, "3.") == 0 || strcmp(risposta2, "luoghi di svago") == 0 || strcmp(risposta2, "svago") == 0 || strcmp(risposta2, "Trova i luoghi di svago più vicini a me") == 0 || strcmp(risposta2, "3") == 0)
        {
            printf("Di seguito una lista dei luoghi di svago a Roma\n");
            printf("1. Adventures room= il luogo offre diverse attività ricreative (escape rooms, adventures room, stanze a tema e molto altro divertimento)\n");
            printf("2. Cinecittà world= Uno dei diversi parchi divertimento a Roma, offre  molte attrazioni come: montagne russe, un cinema 4d e 3 piscine.\nMa anche molti servizi (bar, ristoranti e servizi igenici molto vicini)\n");
            printf("3. Smash arena= nel cuore della natura offre la possibilità di praticare paintball e anche una serie di poligioni di tiro (adatto anche a minorenni)\n");
            printf("4. Zero gravity= Zero-Gravity è il più grande ed innovativo trampoline park in Italia dedicato alle discipline acrobatiche, agli sport di freestyle e al parkour.\n");
            printf("5. Time Elevator Experience Roma= è un viaggio emozionante che coinvolge tutti i sensi, grazie a tecnologie digitali-meccaniche e stereoscopiche si potrà tornare indietro nel tempo e conoscere meglio la storia, la scienza, l\'arte e la natura\nUna grande piattaforma di lancio verso le esplorazioni più entusiasmanti del nostro tempo.\n");
            printf("6. Color Hotel= un viaggio emozionante attraverso il colore, in cui l\'esperienza diviene la chiave per suscitare emozioni indelebili.\nAl confine tra realtà e sogno, vi aspetta un hotel dalle sembianze incantevoli, che custodisce al suo interno un mondo tutto da scoprire.\n");
            printf("7. Xcalibur LaserGame Roma= Formate un team con i vostri amici e sfidate gli avversari con armi Laser.\n");
            printf("8. Pista Kart= diverse piste di Kart, nella zona di fiumicino e nelle periferie romane ti aspettano per sfrecciare sulla pista\n");
            printf("9. Eurpark Adventure= Divertimento, relax e avventura si fondono all\'interno di una pineta secolare per creare l\'Eur Park.\n");
            printf("10. Ice Village= una grande pista di pattinaggio nel quartiere Collatino che regala emozioni indimenticabili\n\n");
            printf("Vuoi tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
    }
    else if (strcmp(risposta1, "2.") == 0 || strcmp(risposta1, "Ricerca di parchi") == 0 || strcmp(risposta1, "parchi") == 0 || strcmp(risposta1, "2") == 0)
    {
        printf("Benvenuto nella sezione -Ricerca di parchi- seleziona una delle opzioni seguenti (1/2/3) o premi + per tornare alla pagina precedente\n\n");
        printf("1. Parchi nella zona\n2. I migliori parchi di Roma\n");
        scanf("%s", risposta6 );
        if (strcmp(risposta6, "1") == 0)
        {
            printf("Per vedere il parchi nella zona è necessario consentire l\'accesso alla posizione del dispostivo\n\n");
            sleep(1);
            printf("Seleziona una delle seguenti opzioni relative all\'accesso alla posizione (1/2/3)\n1. Consenti solo questa volta\n2. Consenti sempre\n3. Non consentire\n");
            scanf(" %s", risposta6);
            if (strcmp(risposta6, "1") == 0)
            {
                printf("Posizione ottenuta, la tua posizione attuale è Viale Romania 32, i parchi nella tua zona sono:\n1. Villa Ada Savoia (3,7km)\n2. Villa Glori (2,3km)\n3. Villa Borghese (2,1km)\n");
                printf("Vuoi tornare alla pagina precedente? (si/no)\n");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (strcmp(risposta6, "2") == 0)
            {
                printf("Posizione ottenuta, la tua posizione attuale è Viale Romania 32, i parchi nella tua zona sono:\n1. Villa Ada Savoia (3,7km)\n2. Villa Glori (2,3km)\n3. Villa Borghese (2,1km)\n\n");
                printf("Vuoi tornare alla pagina precedente? (si/no)\n");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (strcmp(risposta6, "3") == 0)
            {
                printf("Senza la posizione non è possibile fornire la risposta, desideri tornare alla pagina precedente? (si/no)\n");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            
        }
        else if(strcmp(risposta6, "+") == 0)
        {
            goto inizio1;
        }
        else if(strcmp(risposta6, "2") == 0)
        {
            printf("Di seguito una lista dei migliori parchi di Roma\n");
            printf("1. Villa Ada\n");
            printf("2. Il Parco degli Acquedotti\n");
            printf("3. La Terrazza del Pincio\n");
            printf("4. Il Roseto Comunale\n");
            printf("5. Parco Regionale dell'Appia Antica\n");
            printf("6. Villa Doria Pamphilj\n");
            printf("7. Villa Torlonia\n");
            printf("8. Villa Celimontana\n\n");
            printf("Vuoi tornare alla pagina precedente? (si/no)\n");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
        }
    }
        
}





