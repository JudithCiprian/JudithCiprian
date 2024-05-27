//ejercicio 2.1
#include <stdio.h>
#include <stdlib.h>

int main()
{
//declaramos las variables
    float PRE, NPR;

//imprime la frase
    printf("ingreese el precio del producto:");

//lee el valor de la variable.
    scanf ("%f", &PRE);

//condiciona que la variable PRE sea mayor que 1500
    if(PRE > 1500)
    {
//asignan el valor a NPR de la multiplicacion de PRE*1.11
        NPR= PRE * 1.11;
//imprime la frase
        printf("\nNuevo precio: %7.2f", NPR);

    }
    return 0;
}
