#include <stdio.h>
#include <stdlib.h>


int f1(int *);

int main()
{
int I, K = 4;
for (I = 1; I <= 3; I++)
{

printf ("\n\nvalor de k antes de llamar a la funcion: %d", ++K);
printf("\nValor de K después de llamar a la función: %d", f1(&K));
}
}

int f1 (int *R)
 {
     *R += * R;
     return 0;
 }


