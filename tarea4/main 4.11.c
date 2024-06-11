#include <stdio.h>
#include <stdlib.h>

//mayor divisor, el programa al recibir como dato un numero entero positivo calcula su mayor divisor
int mad (int);//prototipo de funcion
void main (void)

{


    int NUM, RES;
    printf ("\ningrese el numero:");
    scanf ("%d", &NUM);
    RES = mad (NUM);
    printf("\nel mayor divisor de %d es: %d", NUM, RES);


}
  int mad (int N1)

  {
    int I = (N1 / 2);
    while (N1 % I)
    return I;

  }





