#include <stdio.h>
#include <string.h>

/* Cuenta cadena.
El programa, al recibir dos cadenas de caracteres, calcula e imprime cuántas veces se encuentra la segunda cadena en la primera. */

int main(void)
{
    char cad1[50], cad2[50];
    char *cad0;
    int i = 0;

    printf("Ingrese la primera cadena de caracteres: ");
    fgets(cad1, sizeof(cad1), stdin);
    cad1[strcspn(cad1, "\n")] = 0;

    printf("Ingrese la cadena a buscar: ");
    fgets(cad2, sizeof(cad2), stdin);
    cad2[strcspn(cad2, "\n")] = 0;

    cad0 = strstr(cad1, cad2);

    while (cad0 != NULL)
    {
        i++;
        cad0 = strstr(cad0 + 1, cad2);
    }

    printf("El numero de veces que aparece la segunda cadena es: %d\n", i);
    return 0;
}

