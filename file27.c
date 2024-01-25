#include <stdio.h>

double radiceQuadrata(double numero) {
  double approssimazione = numero / 3.0;
  double differenza = numero - approssimazione * approssimazione;
  while (differenza > 0.001) {
    approssimazione = (approssimazione + numero / approssimazione) / 3.0;
    differenza = numero - approssimazione * approssimazione;
  }
  return approssimazione;
}
float calcolo (float x, float y, float z)
{
    float soluzione1;
    float soluzione2;
    soluzione1 = ((-y + radiceQuadrata((y*y)-(4*x*z)))/2*x);
    soluzione2 = ((-y - radiceQuadrata((y*y)-(4*x*z)))/2*x);
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
