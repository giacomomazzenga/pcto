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
    char risposta6[50];
    float risposta7;
    int risposta8;
    float risposta9;
    int risposta10;
    char risposta11[50];
    char risposta12[50];
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
            printf("8. Villa Celimontana\n");
            printf("9. Villa Borghese\n");
            printf("10. Villa Sciarra\n\n");
            printf("Vuoi tornare alla pagina precedente? (si/no)\n");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
        }
    }
    else if (strcmp(risposta1, "3.") == 0 || strcmp(risposta1, "Ricerca di centri sportivi e Palestre") == 0 || strcmp(risposta1, "palestre") == 0 || strcmp(risposta1, "3") == 0)   
    {
        printf("Benvenuto nella sezione -Ricerca di centri sportivi e Palestre-\nPremi + per tornare alla pagina precedente\n\n");
        sleep(2);
        printf("Per vedere i centri sportivi e le palestre è necessario consentire l\'accesso alla posizione del dispostivo\n\n");
        sleep(1);
        printf("Seleziona una delle seguenti opzioni relative all\'accesso alla posizione (1/2/3)\n1. Consenti solo questa volta\n2. Consenti sempre\n3. Non consentire\n");
        scanf(" %s", risposta6);
        if (strcmp(risposta6, "1") == 0)
        {
            printf("Posizione ottenuta, la tua posizione attuale è Viale Romania 32, le palestre nella zona sono:\n");
            printf("1. Dabliu Parioli Fitness Club (140m)\n2. Parioli 162 Fitness Club (1,2km)\n3. Parioli Style (1,5km)\n4. The Gym 33 (1,6km)\n5. Centro Kabor (1,4km)\n");
            printf("Vuoi tornare alla pagina precedente? (si/no)\n");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (strcmp(risposta6, "2") == 0)
        {
            printf("Posizione ottenuta, la tua posizione attuale è Viale Romania 32, le palestre nella zona sono:\n");
            printf("1. Dabliu Parioli Fitness Club (140m)\n2. Parioli 162 Fitness Club (1,2km)\n3. Parioli Style (1,5km)\n4. The Gym 33 (1,6km)\n5. Centro Kabor (1,4km)\n");
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
    
        else if(strcmp(risposta6, "+") == 0)
        {
            goto inizio1;
        }
    }   
    else if (strcmp(risposta1, "4.") == 0 || strcmp(risposta1, "controllo del sonno") == 0 || strcmp(risposta1, "sonno") == 0 || strcmp(risposta1, "4") == 0) 
    {
        printf("Benvenuto nella sezione -Controllo del sonno-\n");
        sleep(2);
        printf("Inserisci le ore di sonno dormite\n");
        scanf("%f", &risposta7);
        printf("Inserire il numero di risvegli durante la notte\n (da 0 a 4)\n\n");
        scanf ("%d", &risposta8);
            if (risposta7 >= 8.30 && risposta8 == 0)
            {
                printf("Il tuo sonno è stato ottimale\nIl tuo punteggio sonno è: 100\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 <= 8.30 && risposta7> 6.0  && risposta8 == 0)
            {
                printf("La durata del sonno è stata abbastanza breve ma non hai avuto risvegli\nIl tuo punteggio sonno è: 80\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 6.0 && risposta7>= 4.0 && risposta8 == 0)
            {
                printf("La durata del sonno è stata breve ma non ci sono stati risvegli\nIl tuo punteggio sonno è: 60\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 4.0 && risposta7> 0 && risposta8 == 0)
            {
                printf("La durata del sonno è stata troppo breve ma non ci sono stati risvegli\nIl tuo punteggio sonno è: 40\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 > 8.30 && risposta8 == 1)
            {
                printf("La tua durata del sonno è stata ottimale, ma c'è stato un risveglio\nIl tuo punteggio è 90\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 <= 8.30 && risposta7>= 6.0  && risposta8 == 1)
            {
                printf("La durata del sonno è stata abbastanza breve e hai avuto risvegli\nIl tuo punteggio sonno è: 70\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 6.0 && risposta7>= 4.0 && risposta8 == 1)
            {
                printf("La durata del sonno è stata breve e ci sono stati risvegli\nIl tuo punteggio sonno è: 50\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 4.0 && risposta7> 0 && risposta8 == 1)
            {
                printf("la durata del sonno è stata troppo breve e ci sono stati risvegli\nIl tuo punteggio sonno è: 30\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 > 8.30 && risposta8 == 2)
            {
                printf("La tua durata del sonno è stata ottimale, ma c'è stato un risveglio\nIl tuo punteggio è 85\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 <= 8.30 && risposta7>= 6.0  && risposta8 == 2)
            {
                printf("La durata del sonno è stata abbastanza breve e hai avuto risvegli\nIl tuo punteggio sonno è: 65\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 6.0 && risposta7>= 4.0 && risposta8 == 2)
            {
                printf("La durata del sonno è stata breve e ci sono stati risvegli\nIl tuo punteggio sonno è: 45\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 4.0 && risposta7> 0 && risposta8 == 2)
            {
                printf("la durata del sonno è stata troppo breve e ci sono stati risvegli\nIl tuo punteggio sonno è: 25\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 > 8.30 && risposta8 == 3)
            {
                printf("La tua durata del sonno è stata ottimale, ma c'è stato un risveglio\nIl tuo punteggio è 80\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 <= 8.30 && risposta7>= 6.0  && risposta8 == 3)
            {
                printf("La durata del sonno è stata abbastanza breve e hai avuto risvegli\nIl tuo punteggio sonno è: 60\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 6.0 && risposta7>= 4.0 && risposta8 == 3)
            {
                printf("La durata del sonno è stata breve e ci sono stati risvegli\nIl tuo punteggio sonno è: 30\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 4.0 && risposta7> 0 && risposta8 == 3)
            {
                printf("la durata del sonno è stata troppo breve e ci sono stati risvegli\nIl tuo punteggio sonno è: 10\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 >= 8.30 && risposta8 == 4)
            {
                printf("La tua durata del sonno è stata ottimale, ma c'è stato un risveglio\nIl tuo punteggio è 75\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 <= 8.30 && risposta7>= 6.0  && risposta8 == 4)
            {
                printf("La durata del sonno è stata abbastanza breve e hai avuto risvegli\nIl tuo punteggio sonno è: 55\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 6.0 && risposta7>= 4.0 && risposta8 == 4)
            {
                printf("La durata del sonno è stata breve e ci sono stati risvegli\nIl tuo punteggio sonno è: 25\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7<= 4.0 && risposta7> 0 && risposta8 == 4)
            {
                printf("la durata del sonno è stata troppo breve e ci sono stati risvegli\nIl tuo punteggio sonno è: 5\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta7 <= 0 )
            {
                printf("errore\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
            else if (risposta8 <= 0 )
            {
                printf("errore\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0)
                {
                    goto inizio;
                }
            }
        }   

    else if(strcmp(risposta1, "5.") == 0 || strcmp(risposta1, "attività giornaliere") == 0 || strcmp(risposta1, "attività") == 0 || strcmp(risposta1, "5") == 0) 
    {
        printf("Benvenuto nella sezione -Monitoraggio delle attività giornaliere-\n");
        sleep(2);
        printf("Inserisci il numero di passi fatti nella giornata\n");
        scanf("%f", &risposta9);
        if (risposta9 > 0 && risposta9 < 1000 )
        {
            printf("I passi percorsi nella giornata sono insufficenti\n");
            printf("Hai consumato meno di 35 calorie\n");
            printf("Hai percorso circa 800m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        } 
        else if (risposta9 >= 1000 && risposta9 < 2000 )
        {
            printf("I passi percorsi nella giornata sono insufficenti\n");
            printf("Hai consumato circa 70 calorie\n");
            printf("Hai percorso circa 1600m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        } 
        else if (risposta9 >= 2000 && risposta9 < 3000 )
        {
            printf("I passi percorsi nella giornata sono insufficenti\n");
            printf("Hai consumato circa 105 calorie\n");
            printf("Hai percorso circa 2400m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 3000 && risposta9 < 4000 )
        {
            printf("I passi percorsi nella giornata sono insufficenti\n");
            printf("Hai consumato circa 140 calorie\n");
            printf("Hai percorso circa 3200m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        } 
        else if (risposta9 >= 4000 && risposta9 < 5000 )
        {
            printf("I passi percorsi nella giornata sono insufficenti\n");
            printf("Hai consumato circa 175 calorie\n");
            printf("Hai percorso circa 4000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        } 
        else if (risposta9 >= 5000 && risposta9 < 6000 )
        {
            printf("I passi percorsi nella giornata sono sufficenti\n");
            printf("Hai consumato circa 210 calorie\n");
            printf("Hai percorso circa 4800m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
         else if (risposta9 >= 6000 && risposta9 < 7000 )
        {
            printf("I passi percorsi nella giornata sono sufficenti\n");
            printf("Hai consumato circa 245 calorie\n");
            printf("Hai percorso circa 5600m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 7000 && risposta9 < 8000 )
        {
            printf("I passi percorsi nella giornata sono sufficenti\n");
            printf("Hai consumato circa 280 calorie\n");
            printf("Hai percorso circa 6400m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 8000 && risposta9 < 9000 )
        {
            printf("I passi percorsi nella giornata sono sufficenti\n");
            printf("Hai consumato circa 315 calorie\n");
            printf("Hai percorso circa 7200m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 9000 && risposta9 < 10000 )
        {
            printf("I passi percorsi nella giornata sono sufficenti\n");
            printf("Hai consumato circa 350 calorie\n");
            printf("Hai percorso circa 8000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 10000 && risposta9 < 15000)
        {
            printf("Hai raggiunto la soglia di passi ottimale\n");
            printf("Hai consumato circa 450 calorie\n");
            printf("Hai percorso circa 11300m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 15000 && risposta9 < 20000 )
        {
            printf("Hai raggiunto la soglia di passi ottimale\n");
            printf("Hai consumato circa 485 calorie\n");
            printf("Hai percorso circa 13700m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 20000 && risposta9 < 25000 )
        {
            printf("Hai raggiunto la soglia di passi ottimale\n");
            printf("Hai consumato circa 520 calorie\n");
            printf("Hai percorso circa 15200m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 25000 && risposta9 < 30000 )
        {
            printf("Hai raggiunto la soglia di passi ottimale\n");
            printf("Hai consumato circa 555 calorie\n");
            printf("Hai percorso circa 17300m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 30000 && risposta9 < 35000 )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 800 calorie\n");
            printf("Hai percorso circa 20000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 35000 && risposta9 < 40000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 1000 calorie\n");
            printf("Hai percorso circa 25000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 40000 && risposta9 < 45000 )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 1200 calorie\n");
            printf("Hai percorso circa 30000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 45000 && risposta9 < 50000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 1400 calorie\n");
            printf("Hai percorso circa 35000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 50000 && risposta9 < 55000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 1600 calorie\n");
            printf("Hai percorso circa 40000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 55000 && risposta9 < 60000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 1800 calorie\n");
            printf("Hai percorso circa 45000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 60000 && risposta9 < 65000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 2000 calorie\n");
            printf("Hai percorso circa 50000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 65000 && risposta9 < 70000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 2200 calorie\n");
            printf("Hai percorso circa 55000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 70000 && risposta9 < 80000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 3000 calorie\n");
            printf("Hai percorso circa 65000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 80000 && risposta9 < 90000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 3800 calorie\n");
            printf("Hai percorso circa 75000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 90000 && risposta9 < 100000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 4600 calorie\n");
            printf("Hai percorso circa 90000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 >= 100000 && risposta9 <= 110000   )
        {
            printf("Hai raggiunto la soglia di passi ottimale, ma ricordati di lasciare il tempo al corpo di recuperare\n");
            printf("Non eccedere la soglia dei passi per molti giorni ripetuti\n");
            printf("Hai consumato circa 5200 calorie\n");
            printf("Hai percorso circa 100000m\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9 > 110000   )
        {
            printf("errore\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta9<= 0   )
        {
            printf("errore\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
    }
    else if(strcmp(risposta1, "6.") == 0 || strcmp(risposta1, " Schede di allenamento") == 0 || strcmp(risposta1, "schede") == 0 || strcmp(risposta1, "6") == 0) 
    {
        printf("Benvenuto nella sezione Schede di allenamento\n");
        printf("Inserisci quale è il tuo obbiettivo da raggiungere attraverso queste schede:\n");
        printf("1. Definizione\n2. Dimagrimento\n3. Massa muscolare (1/2/3)\n\n");
        printf("(Ricordati sempre di affincare l'esercizio all'alimentazione, puoi consultare la sezione 7 per avere un piano di alimentazione bilanciato)\n");
        scanf("%d", &risposta10);
        if (risposta10 == 1)
        {
            printf("\n\nRiscaldamento:\n5\'Crunch a terra 3x25\nPlank sui gomiti 3x30\'\nCrunch doppio 3x20\nPanca piana con manubri\n\n");
            printf("Defaticamento:\n5 minuti camminata\nStretching\n\n");
            sleep(1);
            printf("Scheda A:\nCARDIO 10\'\nPANCA 5 X 5 3\'\nSQUAT FRONTALE 5 X 5 3\'-4\'\nPANCA STRETTA 3 X 5 3\'\nPLANCH FRONTALI 5 X 30” 30” REC\nREVERSE CRUNCH 5 X 10 10”\nCARDIO 10\'\n\n\n");
            sleep(1);
            printf("Scheda B:\nCARDIO 10\'\nTRAZIONI ALLA SBARRA, PRESA STRETTA 5X5\nCURL CON BILANCIERE 8 X 5\nPLANCH FRONTALE 3 X 10 CARDIO 10\'\n\n\n");
            sleep(1);
            printf("Scheda C:\nCARDIO 10\'\nTRAZIONI ALLA SBARRA 5 X 5 3-4 REC\nSQUAT 5 X 5\nPANCA 5 X 5\nPLANCH  FRONTALE 5 X 1\nCARDIO 10\'\n\n\n\n");
            sleep(1);
            printf("Scheda D:\nCARDIO 10\'\nPUSH PRESS A 1 BRACCIO 5 X 5\nREMATORE A 1 BRACCIO AL MULTYPOWER 5 X 5\nAFFONDI CON MANUBRI ALLE SPALLE 5 X 5\nSTABILIZZAZIONI LATERALI 4 X 30”\nCARDIO 10\'\n\n\n");
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta10 == 2)
        {
            printf("\n\nRiscaldamento:\n5\'Crunch a terra 3x25\nPlank sui gomiti 3x30\'\nCrunch doppio 3x20\nPanca piana con manubri\n\n");
            printf("Defaticamento:\n5 minuti camminata\nStretching");
            sleep(1);
            printf("Riscaldamento\nScheda A:\nPectoral machine 3x12\nAperture con manubri\nCavi in basso 3x15\nCorda in basso 4\'\nDefaticamento\n\n\n");
            sleep(1);
            printf("Riscaldamento\nScheda B:\nLat machine inversa 4x12 + 2 strip\nLow row machine 3x15\nCurl con entrambi i manubri 3x15\nCurl al cavo 3x12\nDefaticamento\n\n\n");
            sleep(1);
            printf("Riscaldamento\nScheda C:\nAffondi in camminata 4x20\nLeg extension 3x15 + 2 strip\nLeg curl 3x15\nShoulder press 3x12\nAlzate laterali 3x12\nDefaticamento\n\n\n");
            sleep(1);
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if (risposta10 == 3)
        {
            printf("\n\nRiscaldamento:\n5\'Crunch a terra 3x25\nPlank sui gomiti 3x30\'\nCrunch doppio 3x20\nPanca piana con manubri\n\n");
            printf("Defaticamento:\n5 minuti camminata\nStretching");
            sleep(1);
            printf("Riscaldamento\nScheda A:\nApertura panca a 30°\nPanca inclinata libera 4x8 + 1 strip\nPanca piana libera\nPanca stretta 3x8 + 1 strip\nDip libero 3xtmax\nDefaticamento\n\n\n");
            sleep(1);
            printf("Riscaldamento\nScheda B:\nRematore con bilanciere 3x8\nLat machine larga 3x8\nStacchi con bilanciere\nCurl alternato con manubri 3x8\nCurl con bilanciere 2x8\nDefaticamento\n\n\n");
            sleep(1);
            printf("Riscaldamento\nAffondi in camminata con manubri 3x20\nLeg extension 3x12\nSquat con passo laterale 2x25\nSpinte con manubri da seduto 3x8\nShoulder press 3x8\nDefaticamento\n\n\n");
            sleep(1);
            printf("Desideri tornare alla pagina precedente? (si/no)");
            scanf(" %s", risposta4);
            if (strcmp(risposta4, "si") == 0)
            {
                goto inizio;
            }
        }
        else if(strcmp(risposta6, "+") == 0)
        {
            goto inizio1;
        }
    }
    else if(strcmp(risposta1, "7.") == 0 || strcmp(risposta1, "Alimentazione") == 0 || strcmp(risposta1, "cibo") == 0 || strcmp(risposta1, "7") == 0) 
    {
        printf("Benvenuto nella sezione -Alimentazione-");
        printf("Seguire una dieta bilanciata è fondamentale per avere una vita sana, qui puoi trovare degli esempi di diete bilanciate.\nA seconda del proprio obiettivo, incrementare o diminuire le dosi.\nVuoi continuare? (si/no)\n");
        scanf("%s", risposta11 );
        if (strcmp(risposta11, "si") == 0)
        {
            printf("Desideri visualizzare la:\n1. Colazione\n2. Spuntino mattutino\n3. Pranzo\n4. Merenda\n5. Cena\n(1/2/3/4/5)");
            scanf("%s", risposta12 );
            if (strcmp(risposta12, "1") == 0)
            {
                printf("COLAZIONE\n\n1\nLatte di vacca parz. scremato 1 bicchiere 150g\nYogurt bianco intero o greco 0.1 percento di grassi\n1 vasetto 125g\nLatte intero 1 tazza da tè 100g\nRicotta di vacca 50g\nProsciutto crudo magro 30g\n\n");
                sleep(1);
                printf("2\nMuesli, fiocchi d\'avena 2 cucchiai 30g\nCornflackes integrali 3 cucchiai 30g\nPane integrale 50g\nFette biscottate integrali 3 fette 30g");
                sleep(1);
                printf("Mandorle dolci o secche 10g\nNocciole 10g\nNoci 10g\nAltri semi oleosi (arachidi, semi di girasole, di zucca…) 10g");
                sleep(1);
                printf("4\nKiwi o altra porzione di frutta 150g");
                sleep(1);
                printf("5\nMarmellata a ridotto tenore di zuccheri, 1 cucchiaio 15g e un cucchiaino di Miele 5g\n\n");
                sleep(1);
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0);
                {
                goto inizio;
                }
            }
            else if(strcmp(risposta12, "2") == 0)
            {
                printf("SPUNTINO MATTUTINO:\n\nFrutta fresca 150g\n");
                sleep(1);
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0);
                {
                goto inizio;
                }
            }
            else if(strcmp(risposta12, "3") == 0)
            {
                printf("PRANZO:\n\n1 Verdure fresche a volontà\n\n");
                sleep(1);
                printf("2\nOlio di oliva extra vergine 1 cucchiaio 10g\n\n");
                sleep(1);
                printf("3\nPesce:(spigola, merluzzo,nasello, sogliola) 150g\nCarni bianche:(pollo, tacchino…) 150g\nVitello magro 100g\nRicotta di vacca, primosale 100g\nFiocchi di latte 100g\nMozzarella di vacca 80g\nLegumi cotti o in scatola 150g\nLegumi secchi (ceci, fagioli,lenticchie…) 50g\nLegumi freschi (fagioli) 100g\n\n");
                sleep(1);
                printf("4\nPane integrale 50g\nRiso integrale, farro, orzo 1 cucchiaio 30g\nPasta di semola 30g\n\n");
                sleep(1);
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0);
                {
                goto inizio;
                }
            }
            else if(strcmp(risposta12, "4") == 0)
            {
                printf("MERENDA:\n\n1\nFrutta fresca 150g\nPane integrale 30g\nCrackers e fette biscottate integrali, cornflackes integrali 10g\n\n");
                sleep(1);
                printf("2\nYogurt bianco intero 1 vasetto 125g\nRicotta di vacca 50g\nLatte di vacca parz.scremato 125g\nProsciutto crudo magro 30g\n");
                sleep(1);
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0);
                {
                goto inizio;
                }
            }
            else if(strcmp(risposta12, "5") == 0)
            {
                printf("CENA:\n\n1 Verdure fresche a volontà\n\n");
                sleep(1);
                printf("2\nOlio di oliva extra vergine 10g\n\n");
                sleep(1);
                printf("3\nPetto di pollo 100g\nConiglio 100g\nPetto di tacchino 100g\nVitellone tagli magri 100g\nArista di maiale 100g\nBresaola, prosciutto cotto 50g\nUova di gallina 2 uova 120g\nProsciutto crudo magro 50g\nTonno sott\'olio e sgocciolato 50g\nSalmone fresco 100g\n\n");
                sleep(1);
                printf("4\nPane integrale 50g\nPatate 150g\n\n");
                printf("Desideri tornare alla pagina precedente? (si/no)");
                scanf(" %s", risposta4);
                if (strcmp(risposta4, "si") == 0);
                {
                goto inizio;
                }
            }
        }
    }   
}   













   





