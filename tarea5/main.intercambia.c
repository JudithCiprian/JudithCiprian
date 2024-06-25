#include <stdio.h>
#include <ctype.h>

/* Intercambia may�sculas por min�sculas y viceversa.
   El programa intercambia las letras may�sculas por min�sculas y viceversa en una cadena de texto. */

void intercambia(char *); /* Prototipo de funci�n. */

int main(void) // Cambiado para devolver int
{
    char texto[100];
    printf("Ingrese una l�nea de texto: ");
    fgets(texto, sizeof(texto), stdin); // Usar fgets para entrada segura
    texto[strcspn(texto, "\n")] = 0; // Eliminar el car�cter de nueva l�nea

    intercambia(texto);
    printf("Texto modificado: %s\n", texto);

    return 0; // A�adida la declaraci�n de retorno
}

void intercambia(char *cadena) /* La funci�n intercambia may�sculas por min�sculas y viceversa. */
{
    while (*cadena)
    {
        if (islower(*cadena))
        {
            *cadena = toupper(*cadena);
        }
        else if (isupper(*cadena))
        {
            *cadena = tolower(*cadena);
        }
        cadena++;
    }
}
