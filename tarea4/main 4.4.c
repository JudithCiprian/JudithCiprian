#include <stdio.h>
#include <stdlib.h>

// Prueba de variables globales, locales y estáticas.
//El programa utiliza funciones en las que se usan diferentes tipos de

 int f1 (void);
    int f2 (void);
    int f3 (void);
    int f4 (void);

    int K = 3;
int main()
{

 int I;
 for (I = 1; I <= 3; I++)
{
printf("\nel resultado de la funcion f1 es: %d", f1());
printf("\nel resultado de la funcion f1 es: %d", f2());
printf("\nel resultado de la funcion f1 es: %d", f3());
printf("\nel resultado de la funcion f1 es: %d", f4());

}
}
int f1 (void)
{
    k += K;
    return (K);

}
int f2(void)
{
    int K = 1;
    k ++;
    return (K);
}
int f3(void)
{
    static int K = 8;
    k += 2;
    return (K);

}
int f4 (void)
{
    int K = 5
    k += ::K;
    return (K);

}





