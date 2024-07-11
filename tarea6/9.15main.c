#include <stdio.h>
#include <stdlib.h>


/* Letras min�sculas y may�sculas.
El programa, al recibir como dato un archivo formado por cadenas de
caracteres, determina el n�mero de letras min�sculas y may�sculas que hay
en el archivo. */
void minymay(FILE *); /* Prototipo de funci�n. */

void main(void)
{
    FILE *ap;
    if ((ap = fopen("arc.txt", "r")) != NULL)
    {
        minymay(ap);
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo\n");
}

void minymay(FILE *ap1)
/* Esta funci�n se utiliza para leer cadenas de caracteres de un archivo
y contar el n�mero de letras min�sculas y may�sculas que existen en el
archivo. */
{
    char cad[30];
    int i, mi = 0, ma = 0;
    while (!feof(ap1))
    {
        gets(cad);
        /* Se utiliza la funci�n gets() para leer cadenas de caracteres del
        archivo. */
        i = 0;
        while (cad[i] != '\0')
        {
            if (islower(cad[i]))
                mi++;
            else if (isupper(cad[i]))
                ma++;
            i++;
        }
    }
    printf("\n\nN�mero de letras min�sculas: %d", mi);
    printf("\nN�mero de letras may�sculas: %d\n", ma);
}

