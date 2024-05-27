#include <stdio.h>
#include <stdlib.h>
//billete de ferrocarril
//el progrma calcula el costo de un billete de ferrocaril teniendo en cuenta la distancia entre las dos ciudades y el tiempo de permanencia del pasajero

//DIS y TIE: variable de tipo entero
//BIL: variable de tipo real

int main()
{
    int DIS, TIE;
    float BIL;
    printf("ingrese la distancia entre ciudades y el tiempo de estadia: ");

    scanf("%d %d", &DIS, &TIE);
    if ((DIS*2 > 500) && ( TIE > 10 ))
         BIL = DIS * 2 * 0 * 0.19 * 0.8;

            else
        BIL = DIS * 2 *0.19;
    printf ("\n\ncosto del billete: %7.2f", BIL);






    return 0;
}
