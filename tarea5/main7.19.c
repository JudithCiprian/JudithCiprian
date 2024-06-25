#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Cuenta palabras.
El programa calcula el número de palabras que hay en la cadena de caracteres. */

int cuentap(char *); /* Prototipo de función. */
int main(void) // Cambiado para devolver int
{
    int i;
    char fra[50];
    printf("Ingrese la línea de texto: ");
    fgets(fra, sizeof(fra), stdin); // Usar fgets en lugar de gets
    fra[strcspn(fra, "\n")] = 0; // Eliminar el carácter de nueva línea

    i = cuentap(fra);
    printf("\nLa línea de texto tiene %d palabras\n", i);

    return 0; // Añadida la declaración de retorno
}

int cuentap(char *cad) /* La función cuenta el número de palabras que hay en la cadena de caracteres. */
{
    int i = 0, inWord = 0;
    while (*cad)
    {
        if (isspace(*cad))
        {
            inWord = 0; // Estamos fuera de una palabra
        }
        else if (!inWord)
        {
            inWord = 1; // Hemos encontrado el comienzo de una palabra
            i++;
        }
        cad++;
    }
    return i;
}


