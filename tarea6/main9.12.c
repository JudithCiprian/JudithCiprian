#include <stdio.h>
#include <stdlib.h>

/*Incorpora caracteres.
El programa agrega caracteres al archivo libro.txt. */
void main(void)
{
    char p1;
    FILE *ar;
    ar = fopen("libro.txt", "a"); /* Se abre el archivo con la opci�n para incorporar caracteres. */

    if (ar != NULL) {
        printf("Ingrese caracteres (presione Enter para terminar):\n");

        while ((p1 = getchar()) != '\n') {
            fputc(p1, ar); /* Se escribe el caracter en el archivo. */
        }

        fclose(ar); /* Se cierra el archivo despu�s de escribir. */
    }
    else {
        printf("No se puede abrir el archivo\n");
    }
}
