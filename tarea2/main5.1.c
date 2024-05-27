#include <stdio.h>
#include <stdlib.h>

int main()
{
    //funcion matematica. el programa obtiene el resultado de una funcion.
    //OPy T:variable de tipo entero
int OP, T;
float RES; //RES: variable de tipo real.


    printf("ingrese la opcion del calculo y el valor entero:");
    scanf("%d %d", &OP, &T);
    switch(OP)
    {
        case 1: RES = T / 5;
            break;

        case 2: RES = pow(T,T);
        //la funcion pow esta definida en la biblioteca math.h

            break;

        case 3:
        case 4: RES = 6 * T/2;
            break;

        default: RES = 1;
            break;
    }

    printf("\nResultado: %7.2f", RES);
    return 0;

}
