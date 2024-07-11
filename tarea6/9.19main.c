#include <stdio.h>
#include <stdlib.h>

/* Ordena de menor a mayor.
El programa ordena de menor a mayor en función de la matrícula, creando un
nuevo archivo, un archivo de acceso directo compuesto por estructuras y
ordenado de mayor a menor. */

typedef struct /* Declaración de la estructura alumno. */
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void ordena(FILE *, FILE *); /* Prototipo de función. */

void main(void)
{
    FILE *ar1, *ar2;
    ar1 = fopen("ad5.dat", "r");
    ar2 = fopen("ad6.dat", "w");

    if ((ar1 != NULL) && (ar2 != NULL))
    {
        ordena(ar1, ar2);
        fclose(ar1);
        fclose(ar2);
    }
    else
    {
        printf("\nEl o los archivos no se pudieron abrir\n");
    }
}

void ordena(FILE *ap1, FILE *ap2)
/* Esta función ordena de menor a mayor un archivo compuesto por estructuras,
en función de su matrícula, y genera un nuevo archivo. */
{
    alumno alu;
    int t, n, i;

    t = sizeof(alumno);

    fseek(ap1, 0, SEEK_END); /* Se posiciona al final del archivo. */
    n = ftell(ap1) / t; /* Se calcula el número de registros. */
    rewind(ap1); /* Se regresa al inicio del archivo. */

    for (i = 0; i < n; i++)
    {
        fseek(ap1, i * sizeof(alumno), SEEK_SET); /* Se posiciona en el registro i. */
        fread(&alu, sizeof(alumno), 1, ap1); /* Se lee el registro i. */
        fwrite(&alu, sizeof(alumno), 1, ap2); /* Se escribe en el nuevo archivo. */
    }
}
