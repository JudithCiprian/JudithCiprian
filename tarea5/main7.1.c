#include <stdio.h>
#include <stdlib.h>

 void main(void)


{
char p1, p2, p3 = "$";

printf("\nIngrese un caracter: ");
p1=getchar();
putchar(p1);
printf("\n");
fflush(stdin);
/* Luego de leer un caracter siempre es conveniente escribir la función fflush
➥para limpiar el búfer, porque generalmente queda con basura y genera un error
➥en la ejecución del programa. El error se produce porque cuando se ingresa un
➥dato se oprime el return y luego cuando volvemos a leer un caracter o una
➥cadena de caracteres se toma a ese return como el nuevo dato ingresado. */
printf("\nEl caracter p3 es: ");
putchar(p3);
/* Se utiliza la función putchar para escribir el caracter almacenado en p3. */
printf("\n");

printf("\nIngrese otro caracter: ");
fflush(stdin);
scanf("%c", &p2);

printf("%c", p2);



    return 0;
}
