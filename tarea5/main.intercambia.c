#include <stdio.h>
#include <ctype.h>

/* Intercambia mayúsculas por minúsculas y viceversa.
   El programa intercambia las letras mayúsculas por minúsculas y viceversa en una cadena de texto. */

void intercambia(char *); /* Prototipo de función. */

int main(void) // Cambiado para devolver int
{
    char texto[100];
    printf("Ingrese una línea de texto: ");
    fgets(texto, sizeof(texto), stdin); // Usar fgets para entrada segura
    texto[strcspn(texto, "\n")] = 0; // Eliminar el carácter de nueva línea

    intercambia(texto);
    printf("Texto modificado: %s\n", texto);

    return 0; // Añadida la declaración de retorno
}

void intercambia(char *cadena) /* La función intercambia mayúsculas por minúsculas y viceversa. */
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
