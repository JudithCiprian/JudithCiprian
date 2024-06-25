
#include <stdio.h>
#include <ctype.h>
#include <string.h>


void interpreta(char *);
int main(void)
{
  char cad[10];
  printf("Ingrese la cadena de caracteres: ");
  fgets(cad, sizeof(cad), stdin);

  cad[strcspn(cad, "\n")] = 0;
  interpreta(cad);
  return 0;
}

void interpreta(char *cadena)
{

  int i = 0, j, k;
  while (cadena[i] != '\0')
  {
    if (isalpha(cadena[i]))
    {
      if (i == 0 || !isdigit(cadena[i - 1]))
      {
        printf("\nError: no hay un dígito válido antes de la letra '%c'\n", cadena[i]);
        i++;
        continue;
      }
      k = cadena[i - 1] - '0';


      for (j = 0; j < k; j++)
        putchar(cadena[i]);
    }
    i++;
  }
  putchar('\n');
}

