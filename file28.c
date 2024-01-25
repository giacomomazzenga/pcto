#include <stdio.h>
#include <math.h>

float calcolo (float x, float y, float z)
{
    float soluzione1;
    float soluzione2;
    soluzione1 = ((-y + sqrt((y*y)-(4*x*z)))/2*x);
    soluzione2 = ((-y - sqrt((y*y)-(4*x*z)))/2*x);
    printf("la soluzione uno è %f\n", soluzione1);
    printf("la soluzione due è %f\n", soluzione2);
    return (soluzione1, soluzione2);
}
int main ()
{
    float a;
    float b;
    float c;
    printf ("scegli tre numeri\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0 )
    {
        printf("%f", (-c/b));
    }
    else if ( b*b < 4*a*c)
    {
        printf(" non ammette soluzioni reali\n");
        
    }
    else if (((b*b)-(4*a*c)) > 0)
    {
        printf(" ammette soluzioni reali\n");
        calcolo (a, b, c);
        
    }
    else if (((b*b)-(4*a*c)) == 0) 
    {
        printf("l'equazione ha soluzioni reali e coincidenti\n");
        calcolo(a, b, c);
    }
    return(0);
}
