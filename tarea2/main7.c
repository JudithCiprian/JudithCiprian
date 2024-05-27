#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ventas desendentes.
    //el programa al recibir como dato tres valores que representan las ventas, escribe las ventas en orden descendente.
    //P, S y R: variable de tipo real

    float P, S, R;
    printf("\nIngrese las ventas de los tres vendedores:");
    scanf("%f %f %f", &P, &S, &R);
    if (P > S)
        if (S > R)
            if(P > R)
        printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
    else
        printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
    else
        printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
    else

        if (S > R)
            if (P > R)

             printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
        else
             printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
        else
             printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);


    return 0;
}
