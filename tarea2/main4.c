#include <stdio.h>
#include <stdlib.h>
//incrementa el precio de un producto
//el programa al recibir como dato el precio de un producto, incrementaa al mismo 11% si es menor a 1500 y 8% si es mayor o igual a 1500.
int main()
// PRE y NPR variables de tipo real.
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


    printf("\Nuevo precio del producto: %8.2f", NPR);
    return 0;
}
