#include <stdio.h>
#include <stdlib.h>

/* Alumnos. El programa almacena variables de tipo estructura alumno en un archivo. */

typedef struct /* Declaraci�n de la estructura alumno. */
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void escribe(FILE *); /* Prototipo de funci�n. */

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "wb")) != NULL) /* Se abre el archivo para escritura binaria. */
    {
        escribe(ar); /* Llamada a la funci�n escribe para ingresar datos de alumnos. */
        fclose(ar); /* Se cierra el archivo despu�s de usarlo. */
    }
    else
        printf("\nEl archivo no se puede abrir");
}

void escribe(FILE *ap)
/* Esta funci�n sirve para leer los datos de los alumnos utilizando una estructura tipo alumno,
   que se almacenar� posteriormente en un archivo. */
{
    alumno alu;
    int i = 0, r;
    printf("\n�Desea ingresar informacion sobre alumnos? (Si-1 No-0): ");
    scanf("%d", &r);
    while (r)
    {
        i++;
        printf("Matricula del alumno %d: ", i);
        scanf("%d", &alu.matricula);
        printf("Nombre del alumno %d: ", i);
        fflush(stdin); /* Limpia el buffer de entrada para evitar problemas con gets. */
        gets(alu.nombre);
        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);
        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);
        fwrite(&alu, sizeof(alumno), 1, ap); /* Se escribe la estructura alumno en el archivo. */
        printf("\n�Desea ingresar informacion sobre mas alumnos? (S�-1 No-0): ");
        scanf("%d", &r);
    }
}
