#include <stdio.h>
#include <stdlib.h>


//El programa calcula el cubo de los 10 primeros números naturales con la
//ayuda de una función.

int cubo (void);
int I;

int main()
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo ();
        printf ("\n el cubo de %d", I, CUB);

    }
}
int cubo(void)
{
    int I= 2;

    return ( I*I*I);
}






