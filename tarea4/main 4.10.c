#include <stdio.h>
#include <stdlib.h>
  int esMultiplo(int, int); // Prototipo de función.

int main(void)
{
    int num1, num2, resultado;


    printf("Ingresa los dos numeros: ");
    scanf("%d %d", &num1, &num2);


    resultado = esMultiplo(num1, num2);


    if (resultado)
        printf("El segundo numero es multiplo del primero\n");
    else
        printf("El segundo numero no es multiplo del primero\n");

    return 0;
}

int esMultiplo(int n1, int n2)
{
    return (n2 % n1) == 0;
}
