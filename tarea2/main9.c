#include <stdio.h>
#include <stdlib.h>


//el programa, al recibir como datos tres valores enteros establece si los mismos satisfacen una expresion determinada.
//R, T y Q son variables de tipo entero.
//RES: variable de tipo real.



int main()
{
    float RES;
    int R, T, Q;

    printf ("ingrese los vaores de R, T y Q:");
    scanf("%d %d %d", &R, &T, &Q);
    RES = pow(R, 4) - pow(T, 3)+ 4 * pow(Q, 2);
    if (RES <820)
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);




    return 0;
}
