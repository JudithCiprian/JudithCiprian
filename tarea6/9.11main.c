#include <stdio.h>
#include <stdlib.h>

/* Incrementa salarios.
El programa incrementa el salario de los empleados de una empresa
—actualiza el archivo correspondiente— si sus ventas son superiores
al millón de pesos anuales. */

typedef struct { /* Declaración de la estructura empleado. */
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *); /* Prototipo de función. */

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+")) != NULL) {
        /* Abre el archivo en modo lectura y escritura. */
        incrementa(ar);
        fclose(ar); /* Cierra el archivo después de usarlo. */
    } else {
        printf("\nEl archivo no se puede abrir\n");
    }
}

void incrementa(FILE *ap)
/* Esta función se utiliza para incrementar el salario de todos aquellos
empleados que hayan tenido ventas anuales por más de $1,000,000.
Actualiza además el archivo correspondiente. */
{
    empleado emple;

    /* Leemos el primer registro del archivo. */
    while(fread(&emple, sizeof(empleado), 1, ap) == 1) {
        float sum = 0;
        for (int j = 0; j < 12; j++) {
            sum += emple.ventas[j]; /* Calculamos las ventas anuales. */
        }

        if (sum > 1000000) {
            emple.salario *= 1.10; /* Incrementamos el salario en un 10%. */

            /* Nos posicionamos para escribir el registro actualizado. */
            fseek(ap, -sizeof(empleado), SEEK_CUR);
            fwrite(&emple, sizeof(empleado), 1, ap);
            fseek(ap, 0, SEEK_CUR); /* Nos aseguramos de mantener la posición del archivo. */
        }
    }
}
