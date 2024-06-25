#include <stdio.h>
#include <stdlib.h>


int main() {
    char texto[1000]; // Puedes ajustar el tamaño según tus necesidades
    int mayusculas = 0, minusculas = 0;

    // Pedir al usuario que ingrese el texto
    printf("Ingresa el texto: ");
    fgets(texto, sizeof(texto), stdin); // Leer el texto

    // Eliminar el salto de línea al final si existe
    size_t longitud = strlen(texto);
    if (longitud > 0 && texto[longitud - 1] == '\n') {
        texto[longitud - 1] = '\0';
    }

    // Recorrer cada caracter del texto utilizando strlen y punteros
    for (size_t i = 0; i < strlen(texto); i++) {
        if (isupper(texto[i])) {
            mayusculas++;
        } else if (islower(texto[i])) {
            minusculas++;
        }
    }

    // Imprimir los resultados
    printf("Número de letras mayúsculas: %d\n", mayusculas);
    printf("Número de letras minúsculas: %d\n", minusculas);

    return 0;
}
