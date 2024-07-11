#include <stdio.h>
#include <stdlib.h>


/* Alumnos.
El programa pregunta al usuario el número de registro que desea modificar, obtiene el nuevo promedio del alumno y modifica tanto el registro como el archivo correspondiente. */
typedef struct {
    /* Declaración de la estructura alumno. */
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void modifica(FILE *); /* Prototipo de función. */

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "r+")) != NULL) /* Abre el archivo para lectura y escritura. */
    {
        modifica(ar); /* Llama a la función para modificar registros. */
        fclose(ar); /* Cierra el archivo después de usarlo. */
    }
    else
        printf("\nEl archivo no se puede abrir");
}

void modifica(FILE *ap)
/* Esta función se utiliza para modificar el promedio de un alumno. */
{
    int d;
    alumno alu;

    printf("\nIngrese el número de registro que desea modificar: ");
    scanf("%d", &d);

    fseek(ap, (d - 1) * sizeof(alumno), SEEK_SET);
    /* Posiciona el apuntador al inicio del registro deseado en base al número de registro ingresado. */

    fread(&alu, sizeof(alumno), 1, ap);
    /* Lee el registro actual para mostrarlo y permitir la modificación del promedio. */

    printf("\nRegistro seleccionado:\n");
    printf("Matrícula: %d\n", alu.matricula);
    printf("Nombre: %s\n", alu.nombre);
    printf("Carrera: %d\n", alu.carrera);
    printf("Promedio actual: %.2f\n", alu.promedio);

    printf("\nIngrese el nuevo promedio del alumno: ");
    scanf("%f", &alu.promedio);

    fseek(ap, (d - 1) * sizeof(alumno), SEEK_SET);
    /* Vuelve a posicionar el apuntador para escribir el registro modificado en la misma posición. */

    fwrite(&alu, sizeof(alumno), 1, ap);
    /* Escribe el registro modificado en el archivo. */
}



