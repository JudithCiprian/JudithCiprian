#include <stdio.h>
#include <stdlib.h>


//igualar expresiones: el programa el recibir como datos T, P y N, comprueba la igualdad de una expresion determinada.
//T, P y N son varialbles de tipo entero

int main()
{

    int T, P, N;
    printf("ingrese los valores de T, P y N:");
    scanf ("%d %d %d", &T, &P, &N);
    if (P != 0)
    {
        if (pow(T / P, N)==(pow(T, N) / pow(P, N)))
            printf("\nSe compueba la igualdad");
        else
            printf("\nNo se comprueba la igualdad");

    }
    else
        printf("\nP tiene que ser diferente de cero");
    return 0;
}
