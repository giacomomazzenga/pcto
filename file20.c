#include <stdio.h>
#include <string.h>
int main ()

{
    char x [50];

    printf("vuoi sapere cosa è il comunismo ?\n");
    scanf("%s", x);
    while (strcmp( x, "si") == 0)
    {
        printf("il comunismo è una dottrina politica, economica e sociale fondata sulla proprietà non individuale ma comune dei beni esistenti e dei mezzi di produzione; com., l'attuazione, sul piano etico e politico, di ogni concezione più o meno direttamente connessa con tale dottrina, nonché il regime che ne deriva e ne è l'espressione.\n");
        printf("vuoi sapere cosa è il comunismo?\n");
        scanf("%s", x);
    }
}
