#include <stdio.h>
int main()
{
float celcius;
float fahrenheit;
float kelvin;
printf("inserisci una temperatura\n");
scanf("%f", &celcius );
if (celcius<-273.15)
    {
        printf("errore\n");
    }

else 
    {
        fahrenheit = 9/5*celcius+32;
        kelvin = celcius+273,15;
        printf("temperatura in fahrenheit è %f\nla temperatura in kelvin è %f\n", fahrenheit, kelvin);
    }


}
