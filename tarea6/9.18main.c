#include <stdio.h>
#include <stdlib.h>

/* Mezcla.
El programa mezcla, respetando el orden, dos archivos que se encuentran
ordenados en forma ascendente considerando la matr�cula de los alumnos. */
void mezcla(FILE *, FILE *, FILE *); /* Prototipo de funci�n. */

void main(void)
{
    FILE *ar, *ar1, *ar2;
    ar = fopen("arc9.dat", "r");
    ar1 = fopen("arc10.dat", "r");
    ar2 = fopen("arc11.dat", "w");

    if (ar != NULL && ar1 != NULL && ar2 != NULL)
    {
        mezcla(ar, ar1, ar2);
        fclose(ar);
        fclose(ar1);
        fclose(ar2);
    }
    else
    {
        printf("No se pueden abrir los archivos\n");
    }
}

void mezcla(FILE *ar, FILE *ar1, FILE *ar2)
{
    /* Esta funci�n mezcla, respetando el orden, dos archivos que se encuentran
    ordenados en funci�n de la matr�cula. */

    int mat, mat1;
    float ca[3], ca1[3];
    int b = 1, b1 = 1;

    while ((!feof(ar) || !b) && (!feof(ar1) || !b1))
    {
        if (b && fscanf(ar, "%d", &mat) == 1)
        {
            for (int i = 0; i < 3; i++)
                fscanf(ar, "%f", &ca[i]);
            b = 0;
        }

        if (b1 && fscanf(ar1, "%d", &mat1) == 1)
        {
            for (int i = 0; i < 3; i++)
                fscanf(ar1, "%f", &ca1[i]);
            b1 = 0;
        }

        if (mat < mat1)
        {
            fprintf(ar2, "%d\t", mat);
            for (int i = 0; i < 3; i++)
                fprintf(ar2, "%f\t", ca[i]);
            fputs("\n", ar2);
            b = 1;
        }
        else
        {
            fprintf(ar2, "%d\t", mat1);
            for (int i = 0; i < 3; i++)
                fprintf(ar2, "%f\t", ca1[i]);
            fputs("\n", ar2);
            b1 = 1;
        }
    }

    while (!feof(ar))
    {
        fscanf(ar, "%d", &mat);
        fprintf(ar2, "%d\t", mat);
        for (int i = 0; i < 3; i++)
        {
            fscanf(ar, "%f", &ca[i]);
            fprintf(ar2, "%f\t", ca[i]);
        }
        fputs("\n", ar2);
    }

    while (!feof(ar1))
    {
        fscanf(ar1, "%d", &mat1);
        fprintf(ar2, "%d\t", mat1);
        for (int i = 0; i < 3; i++)
        {
            fscanf(ar1, "%f", &ca1[i]);
            fprintf(ar2, "%f\t", ca1[i]);
        }
        fputs("\n", ar2);
    }
}
