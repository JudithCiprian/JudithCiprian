#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Cuenta palabras.
El programa calcula el n�mero de palabras que hay en la cadena de caracteres. */

int cuentap(char *); /* Prototipo de funci�n. */
int main(void) // Cambiado para devolver int
{
    int i;
    char fra[50];
    printf("Ingrese la l�nea de texto: ");
    fgets(fra, sizeof(fra), stdin); // Usar fgets en lugar de gets
    fra[strcspn(fra, "\n")] = 0; // Eliminar el car�cter de nueva l�nea

    i = cuentap(fra);
    printf("\nLa l�nea de texto tiene %d palabras\n", i);

    return 0; // A�adida la declaraci�n de retorno
}

int cuentap(char *cad) /* La funci�n cuenta el n�mero de palabras que hay en la cadena de caracteres. */
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


