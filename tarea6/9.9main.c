#include <stdio.h>
#include <stdlib.h>

/* Alumnos.
El programa lee bloques �variables de tipo estructura alumno� de un archivo de acceso directo. */

typedef struct { /* Declaraci�n de la estructura alumno. */
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void lee(FILE *); /* Prototipo de funci�n. */

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "rb")) != NULL) /* Se abre el archivo para lectura binaria. */
    {
        lee(ar); /* Llamada a la funci�n lee para leer datos de alumnos desde el archivo. */
        fclose(ar); /* Se cierra el archivo despu�s de usarlo. */
    }
    else
        printf("\nEl archivo no se puede abrir");
}

void lee(FILE *ap)
/* Esta funci�n se utiliza para leer bloques de un archivo de acceso directo. */
{
    alumno alu;
    fread(&alu, sizeof(alumno), 1, ap); /* Primera lectura antes de entrar al ciclo. */
    while (!feof(ap))
    {
        printf("\nMatr�cula: %d", alu.matricula);
        printf("\tCarrera: %d", alu.carrera);
        printf("\tPromedio: %.2f\t", alu.promedio); /* Imprime el promedio con dos decimales. */
        puts(alu.nombre);
        fread(&alu, sizeof(alumno), 1, ap); /* Lectura dentro del ciclo para avanzar al siguiente registro. */
    }
}
