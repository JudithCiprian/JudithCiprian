#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//minuscula y mayuscula el programa al recibir como dato un arreglo unidimensional de tipo cadena de caracteres, determina el numero de

//prototipo de funcion

void main(void)
{
    int i, n;
    char FRA[20][50];
    //se declara el arreglo unidimensional de cadena de caracteres
     printf("\ningrese el numero de filas del arreglo: ");
     scanf("%d", &n);

     for (i=0; i<n; i++)
     {
         printf("ingrese la linea %d de texto: ", i+1);
         fflush(stdin);
         gets(FRA[i]);
     }
     printf("\n\n");
     for (i=0; i<n; i++)
      minymay (FRA[i]);

}

void minymay(char *cadena)//esta funcion se utiliza para calcular el numero de minusculas y mayusculas que hay en cada cadena
{
    int i= 0, mi = 0, ma = 0;
    while (cadena[i] != '\0')
    {
        if (islower (cadena[i]))
            mi++;
        else
        if ( isupper (cadena[i]))
            ma++;

        i++;
    }
    printf("\n\nNumero de letras minusculas: %d", mi);
    printf("\nNumero de letras mayusculas: %d", ma);

    return 0;
}


