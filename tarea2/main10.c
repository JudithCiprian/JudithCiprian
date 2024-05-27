#include <stdio.h>
#include <stdlib.h>


//par, impar o nulo
// NUM: variable de tipo entero

int main()
{
   int NUM;
   printf("ingrese el numero:");
   scanf("%d", &NUM);
   if (NUM == 0)
    printf("\nNulo");
   else
    if (pow (-1, NUM)> 0)
    printf("\nPar");
   else
    printf ("\nImpar");





    return 0;
}
