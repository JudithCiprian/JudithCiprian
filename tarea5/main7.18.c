#include <stdio.h>

/* Cadena invertida resulta en forma recursiva. */

void inverso(char *cadena);/* Prototipo de funcion. */
void main(void)
{
  char fra[50];
  printf("Ingrese la linea de texto: ");
  gets(fra);
  printf("\nEscribe la linea de texto en forma inversa: ");
  inverso(fra);
}

void inverso(char *cadena)
 {
  if (*cadena != '\0')
  {
    inverso(&cadena[1]);
    putchar(*cadena);
  }
}
