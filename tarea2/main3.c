#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaramos las variables
    float PRE, NPR;
    //Imprime texto
    printf("Ingrese el precio del producto: ");

    //Lee el valor introducido por el ususario
    scanf("%f", &PRE);

    //evalua la condicion
    if (PRE<1500)

        //si la condicion es verdadera
        NPR = PRE * 1.11;

        //si la condicion es falsa
    else
        NPR = PRE * 1.08;


    printf("\Nuevo precio del producto:")
    return 0;
}
