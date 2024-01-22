#include <stdio.h>
int main()
{
    printf ("inserisci il primo numero\n");
    int a;
    scanf ("%d", &a);
    printf ("insersci il secondo numero\n");
    int b;
    scanf ("%d", &b);
    int c = a+b;
    int d = a*b;
    int e = a-b;
    float f = ((float) a)/b;
    printf ("%d\n%d\n%d\n%f\n",c, d, e, f);
}
