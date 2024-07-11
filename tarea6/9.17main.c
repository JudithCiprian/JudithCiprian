#include <stdio.h>
#include <stdlib.h>

/* Reemplaza palabras.
El programa lee cadenas de caracteres de un archivo y cada vez que
encuentra la palabra México escrita en forma incorrecta —la primera con
minúscula— la reemplaza por su forma correcta y escribe la cadena en otro
archivo. */
void cambia(FILE *, FILE *);
/* Prototipo de función. Se pasan dos archivos como parámetros. */

void main(void)
{
    FILE *ar;
    FILE *ap;

    ar = fopen("arc.txt", "r"); /* Se abre el archivo arc.txt para lectura. */
    ap = fopen("arc1.txt", "w"); /* Se abre el archivo arc1.txt para escritura. */

    if (ar != NULL && ap != NULL)
    {
        cambia(ar, ap);
        fclose(ar);
        fclose(ap);
    }
    else
    {
        printf("No se pueden abrir los archivos");
    }
}

void cambia(FILE *ap1, FILE *ap2)
{
    /* Esta función reemplaza en la cadena de caracteres la palabra México escrita
    con minúsculas —la primera letra— por su forma correcta y escribe la cadena
    de caracteres en un nuevo archivo. */

    char cad[30];
    char aux[30];

    while (fgets(cad, 30, ap1) != NULL)
    {
        char *cad1 = cad;
        char *cad2 = strstr(cad1, "méxico"); /* Localiza la subcadena "méxico" en cad1. */

        while (cad2 != NULL)
        {
            cad2[0] = 'M'; /* Reemplaza la primera letra minúscula por mayúscula. */

            cad2 = strstr(cad1, "méxico"); /* Busca la siguiente aparición de "méxico". */
        }

        fputs(cad1, ap2); /* Escribe la cadena corregida en el archivo ap2. */
    }
}
