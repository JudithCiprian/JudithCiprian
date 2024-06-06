#include <stdio.h>
#include <stdlib.h>

//el programa calcula el cubo de los 10 primeros numeros naturales con la ayuda de una funcion. en la solucion del problema se utiliza una variable global, aunque esto como veremos más adelante, no es muy recomendable.
int cubo(void);
int I;
int main()
{

int CUB;
for (I = 1; I <= 10; I++)
{
  CUB = cubo();
  printf ("\n el cubo de %d es: %d", I, CUB);
}
}
int cubo(void)
{

return (I*I*I);
}
