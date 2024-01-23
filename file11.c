#include <stdio.h>
#include <string.h>
int main()
{
    char prova [50];
    char choice [50];
    printf("inserisci una stringa\n"); 
    scanf(" %[^'\n']s", prova);
    printf("inserisci una seconda stringa\n");
    scanf(" %[^'\n']s", choice);
    if (strcmp(choice, prova)==0)
    {
        printf("sei stupido");
    }
    else 
    {
        printf("Bravo!");
    }
}





